#!include<stdio.h>
int main()
{
  
  sshagent(['tomcat-dev']) {

sh 'scp -o StrictHostKeyChecking=no target/*jar ec2-user@34.217.105.21:8080/manager/'

}
  
printf("hello world");
return 0;
}
