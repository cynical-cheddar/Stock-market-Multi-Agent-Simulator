#! /usr/bin/env python3
import argparse
import cmd
import pickle
import socket
import threading


def main():
    """Connect a chat client to a server and process incoming commands."""
    client = ZIC(socket.create_connection(('localhost', 8000)))
    client.start()


class ZIC(threading.Thread):


    def __init__(self, connection):

        self.connection = connection
        self.reader = connection.makefile('rb', -1)
        self.writer = connection.makefile('wb', 0)
        self.handlers = dict(print=print, ping=self.ping)


    
    
    def run(self):
        """Execute an automated message pump for client communications."""
        try:
            while True:
                self.handle_server_command()
        except (BrokenPipeError, ConnectionResetError):
            pass

    def handle_server_command(self):
        """Get an instruction from the server and execute it."""
        source, (function, args, kwargs) = pickle.load(self.reader)
        print('Host: {} Port: {}'.format(*source))
        self.handlers[function](*args, **kwargs)

    def preloop(self):
        """Announce to other clients that we are connecting."""
        self.call('print', socket.gethostname(), 'just entered.')

    def call(self, function, *args, **kwargs):
        """Arrange for a handler to be executed on all other clients."""
        assert function in self.handlers, 'You must create a handler first!'
        pickle.dump((function, args, kwargs), self.writer)

    def do_say(self, arg):
        """Causes a message to appear to all other clients."""
        self.call('print', arg)

    def do_ping(self, arg):
        """Ask all clients to report their presence here."""
        self.call('ping')

    def ping(self):
        """Broadcast to all other clients that we are present."""
        self.call('print', socket.gethostname(), 'is here.')

    def do_exit(self, arg):
        """Disconnect from the server and close the client."""
        return True

    def postloop(self):
        """Make an announcement to other clients that we are leaving."""
        self.call('print', socket.gethostname(), 'just exited.')


if __name__ == '__main__':
    main()