import boto3
import time
import msvcrt
from dotenv import dotenv_values
import os


serverInstanceID = "i-0de4178ad5b56229f"


config = dotenv_values("creds.env")
region = config['region']


session = boto3.Session(
    aws_access_key_id=config['aws_access_key_id'],
    aws_secret_access_key=config['aws_secret_access_key'],
)

ec2 = session.client('ec2', region_name=region)
response = ec2.describe_instances()
print("ACTIVE EC2s")
print(response['Reservations'][0]['Instances'])
print("Status of server: ")
print(serverInstanceID)

ec2_resource = session.resource('ec2', region_name=region)

instance = ec2_resource.Instance(serverInstanceID)
instanceState = instance.state['Name']
print("ec2 status:")
print(instanceState)


# control loop:

while 1:
    print("Enter server command ('status', 'start', 'stop')")
    command = input()
    if(command == "status"):
        instance = ec2_resource.Instance(serverInstanceID)
        instanceState = instance.state['Name']
        print("ec2 status:")
        print(instanceState)
    if(command == "start"):
        instance = ec2_resource.Instance(serverInstanceID)
        if(not instance.state['Name'] == "running"):
            instance.start()
            instance.wait_until_running()
            print("instance running")
    if(command == "stop"):
        instance = ec2_resource.Instance(serverInstanceID)
        instance.stop()
        print("stopping instance")
        

    








if instance.state['Name'] == 'running':
    print('It is running')

