# Commands

## Check no graphical interface

Verify that no graphical interface is in use.

We will use the command:

```
ls /usr/bin/*session
```

## Check UFW

Check that the UFW service is in use:

```
sudo ufw status
```

```
sudo service ufw status
```

## Check SSH service

Check that the SSH service is in use.

```
sudo service ssh status
```

## Check OS

Check that you are using the Debian or Centos operating system.

```
uname --kernel-version
```

## Check user and group

Check that your user is within the "sudo" and "user42" groups.

```
getent group sudo user42
```

## Add user and check password policy

Create a new user and show that it follows the password policy we have created.

```
sudo adduser name_user
```

and enter a password that follows the policy.

## Check group creation

We create a new group named "evaluating".

```
sudo addgroup evaluating
```

## Check adding to group

We add the new user to the new group.

```
sudo adduser name_user evaluating
```

## Check hostname

Check that the machine's hostname is correct login42

```
hostname
```

## Check change hostname

Modify hostname to replace your login with the evaluator's. In this case, we will replace it with student42.

```
sudo nano /etc/hostname
```

and replace our login with the new one.

```
sudo nano /etc/hosts
```

and replace our login with the new one.

Finally reboot the machine.

```
sudo reboot
```

and check with this command:

```
hostname
```

## Check all partitions

Check that all partitions are as indicated in the subject.

```
lsblk
```

## Check sudo

Check that sudo is installed.

```
which sudo
```

## Check add user to sudo group

Add the new user to the sudo group.

```
sudo adduser name_user sudo
```

We check that it is within the group.

```
getent group sudo
```

## Check sudo rules

Show the application of the rules imposed for sudo by the subject.

```
nano /etc/sudoers.d/sudo_config
```

## Check sudo logs

Show that the path /var/log/sudo/ exists and contains at least one file, in this we should see a history of the commands used with sudo.

```
cd
cd /var/log/sudo
ls
cat sudo_config
```

## Check UFW advanced

Check that the UFW program is installed on the virtual machine and check that it works correctly.

```
dpkg -s ufw
```

```
sudo service ufw status
```

## Check UFW active rules

List the active rules in UFW, if the bonus part is not done, the rule for port 4241 should only appear.

```
sudo ufw status numbered
```

## Check rule creation

Create a new rule for port 8080. Verify that it has been added to the active rules and then you can delete it.

```
sudo ufw allow 8080
```

```
sudo ufw status numbered
```

To delete the rule, we must use the command:

```
sudo ufw delete num_rule
```

We check that it has been deleted

```
sudo ufw status numbered
```

and we see the number of the next rule that needs to be deleted.


Delete the new rule.

```
sudo ufw delete 5
```

We check that only the required rules in the subject remain:

```
sudo ufw status numbered
```

## Check SSH advanced

Check that the ssh service is installed on the virtual machine, that it works correctly, and that it only works on port 4242.

To see if ssh is present:

```
which ssh
```

To see if is running:

```
sudo service ssh status
```

## Check SSH usage

Use ssh to log in with the newly created user. Make sure that you cannot use ssh with the root user.

We try to connect over ssh with the root user but we do not have permission.

```
ssh root@localhost -p 4241
```

We connect via ssh with the new user using the command:

```
ssh newuser@localhost -p 4241
```

## Check crontab of script

Modify the runtime of the script from 10 minutes to 1.

We run the following command to modify the crontab file:

```
sudo crontab -u root -e
```

We modify the first parameter, instead of 10 we change it to 1.

```
*/1 * * * * sh /home/wng/monitoring.sh
```
