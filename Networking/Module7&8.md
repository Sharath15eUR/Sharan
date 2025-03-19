---
Assignment for Module 7 and 8
---

## Q1) Try Test-Connection and nslookup commands for below websites
 - www.google.com
 - www.facebook.com
 - www.amazon.com
 - www.github.com
 - www.cisco.com

---
```
PS C:\Users\shara> Test-Connection www.google.com -Count 4

Source        Destination     IPV4Address      IPV6Address                              Bytes    Time(ms)
------        -----------     -----------      -----------                              -----    --------
SHARAN-PC     www.google.com  142.250.182.4                                             32       2
SHARAN-PC     www.google.com  142.250.182.4                                             32       5
SHARAN-PC     www.google.com  142.250.182.4                                             32       2
SHARAN-PC     www.google.com  142.250.182.4                                             32       3


PS C:\Users\shara> nslookup www.google.com
Server:  183.82.243.66.actcorp.in
Address:  183.82.243.66

Non-authoritative answer:
Name:    www.google.com
Addresses:  2404:6800:4007:819::2004
          142.250.182.4

PS C:\Users\shara> Test-Connection www.facebook.com -Count 4

Source        Destination     IPV4Address      IPV6Address                              Bytes    Time(ms)
------        -----------     -----------      -----------                              -----    --------
SHARAN-PC     www.facebook... 157.240.192.35                                            32       1
SHARAN-PC     www.facebook... 157.240.192.35                                            32       2
SHARAN-PC     www.facebook... 157.240.192.35                                            32       4
SHARAN-PC     www.facebook... 157.240.192.35                                            32       1


PS C:\Users\shara> nslookup www.facebook.com
Server:  183.82.243.66.actcorp.in
Address:  183.82.243.66

Non-authoritative answer:
Name:    star-mini.c10r.facebook.com
Addresses:  2a03:2880:f137:182:face:b00c:0:25de
          157.240.192.35
Aliases:  www.facebook.com

PS C:\Users\shara> Test-Connection www.amazon.com -Count 4

Source        Destination     IPV4Address      IPV6Address                              Bytes    Time(ms)
------        -----------     -----------      -----------                              -----    --------
SHARAN-PC     www.amazon.com  18.67.156.60                                              32       1
SHARAN-PC     www.amazon.com  18.67.156.60                                              32       3
SHARAN-PC     www.amazon.com  18.67.156.60                                              32       5
SHARAN-PC     www.amazon.com  18.67.156.60                                              32       3


PS C:\Users\shara> nslookup www.amazon.com
Server:  183.82.243.66.actcorp.in
Address:  183.82.243.66

Non-authoritative answer:
Name:    d3ag4hukkh62yn.cloudfront.net
Addresses:  2600:9000:2241:da00:7:49a5:5fd4:b121
          2600:9000:2241:a200:7:49a5:5fd4:b121
          2600:9000:2241:8200:7:49a5:5fd4:b121
          2600:9000:2241:f200:7:49a5:5fd4:b121
          2600:9000:2241:a800:7:49a5:5fd4:b121
          2600:9000:2241:3e00:7:49a5:5fd4:b121
          2600:9000:2241:1600:7:49a5:5fd4:b121
          2600:9000:2241:4000:7:49a5:5fd4:b121
          18.67.156.60
Aliases:  www.amazon.com
          tp.47cf2c8c9-frontier.amazon.com

PS C:\Users\shara> Test-Connection www.github.com -Count 4

Source        Destination     IPV4Address      IPV6Address                              Bytes    Time(ms)
------        -----------     -----------      -----------                              -----    --------
SHARAN-PC     www.github.com  20.207.73.82                                              32       16
SHARAN-PC     www.github.com  20.207.73.82                                              32       19
SHARAN-PC     www.github.com  20.207.73.82                                              32       19
SHARAN-PC     www.github.com  20.207.73.82                                              32       20


PS C:\Users\shara> nslookup www.github.com
Server:  183.82.243.66.actcorp.in
Address:  183.82.243.66

Non-authoritative answer:
Name:    github.com
Address:  20.207.73.82
Aliases:  www.github.com

PS C:\Users\shara> Test-Connection www.cisco.com -Count 4

Source        Destination     IPV4Address      IPV6Address                              Bytes    Time(ms)
------        -----------     -----------      -----------                              -----    --------
SHARAN-PC     www.cisco.com   23.209.254.61                                             32       2
SHARAN-PC     www.cisco.com   23.209.254.61                                             32       2
SHARAN-PC     www.cisco.com   23.209.254.61                                             32       4
SHARAN-PC     www.cisco.com   23.209.254.61                                             32       5


PS C:\Users\shara> nslookup www.cisco.com
Server:  183.82.243.66.actcorp.in
Address:  183.82.243.66

Non-authoritative answer:
Name:    e2867.dsca.akamaiedge.net
Addresses:  2600:140f:3:f95::b33
          2600:140f:3:f93::b33
          23.209.254.61
Aliases:  www.cisco.com
          www.cisco.com.akadns.net
          wwwds.cisco.com.edgekey.net
          wwwds.cisco.com.edgekey.net.globalredir.akadns.net

```
## Q2) Use Wireshark to capture and analyze DNS, TCP, UDP traffic and packet header, packet flow, options and flags

### DNS:  (Flags are explanded in the packet frame analysis, also includes the source and dest)
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/2_1.png)    
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/2_2.png) 

---
### TCP:  (Flags are explanded in the packet frame analysis, also includes the source and dest)
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/2_3.png)   
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/2_4.png)    

---
### UDP: (Flags are explanded in the packet frame analysis, also includes the source and dest)
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/2_5.png)   
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/2_6.png)    

---

## Q3) Explore traceroute/tracert for different websites eg: google.com and analyse the parameters in the output and explore different options for traceroute command.

### About tracert:
The tracert command (short for "trace route") is used in Windows to track the route that packets take to reach a destination. It helps diagnose network latency and connectivity issues.
### Usage: 
`tracert [options] target`
### Output Analysis:
 
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/3_1.png)   
For each hop it shows the  
 - **Hop number**: corresponding to the sequential order of the routers along the route.In this case , there is a total of 8 hops.
 - **Response Time**: It shows the RTT (round trip time) for each query sent for each hop. We can see that here in terms of ms.
 - **IP addresses**: Shows the responding router’s IP. (Here the target IP is 216.58.196.174, while the IPs along the route include like 192.168.68.1,74.14.212.80 etc).
 - **Timeouts**: A ‘*’ sign indicates a timeout or a unreachable hop.We get timeouts in hop 2-4.

---
## Q5) Set up trunk ports between switches and try ping between different VLANs.

### CISCO Packet Tracer Setup:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/4_!.png)     

---
### Switch0 Config:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/4_2.png)  

---
### Switch0 VLAN LIST:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/4_3.png)   

---  
### Switch1 Config:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/4_4.png) 

--- 
### Switch1 VLAN LIST:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/4_5.png) 

---   
### ICMP from Sales to other PCs:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/4_6.png)  

---
### ICMP from Engg to other PCs:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/4_7.png)  

---  

## Q6) Change the native VLAN on a trunk port. Test for VLAN mismatches and troubleshoot.

### CISCO Packet Tracer Setup is the same as prev question and Configuring a Native VLAN for Switch 0:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/6_1.png)     

---
### Switch0 gives an error and closes the trunk connection:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/6_2.png)  

---
### Adding Native Vlan to Switch1 as well:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/6_3.png)   

---  
### Error Resolved:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/6_4.png) 

--- 
## Q7) Configure a management VLAN and assign an IP address for remote access. Test SSH or Telnet access to the switch

### CISCO PACKET TRACER Setup: 
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/7_1.png)       

---
### Setting up a Management VLAN:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/7_2.png)    

---
### Enabling SSH:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/7_3.png)     

---  
### SSH:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/7_4.png)   

--- 
### Enabling Telnet:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/7_5.png)    

---
### Telnet:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/7_6.png)     

---  

## Q8) You have a Cisco switch and a VoIP phone that needs to be placed in a voice VLAN (VLAN 20). The data for the PC should remain in a separate VLAN (VLAN 10). Configure the switch port to support both voice and data traffic.

### CISCO Packet Tracer Setup:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/8_1.png)    

---
### Configuring the Switch and the resultant VLAN brief:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/8_2.png)     

---  

## Q9) You configured VLANs 10 and 20 on your switch and assigned ports to each VLAN. However, devices in VLAN 10 cannot communicate with devices in VLAN 20. Troubleshoot the issue.

### Addressing the Issue:
 - Issue is devices from VLAN say 10 cant communicate with devices in VLAN 20.
 - This is the expected behavior since we set up a VLAN.

### Solution
 - One solution to make devices from VLAN 10 communicate with VLAN 20 is by Inter VLAN routing with a router after the switch.
 - Configure like mentioned in the next question and that should solve the issue.

---
## Q10) Try Inter VLAN routing with Router
### CISCO Packet Tracer Setup:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/10_1.png)    

---
### Configuring the Switch:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/10_2.png)     

---  
### COnfiguring the Router:
```
Router(config-if)#conf t
%Invalid hex value
Router(config)#
Router(config)#int f0/0
Router(config-if)#no shutdown
Router(config-if)#
Router(config-if)#int f0/0.10
Router(config-subif)#  
%LINK-5-CHANGED: Interface FastEthernet0/0.10, changed state to up

%LINEPROTO-5-UPDOWN: Line protocol on Interface FastEthernet0/0.10, changed state to up

Router(config-subif)#enc
Router(config-subif)#encapsulation dot1Q 10
Router(config-subif)#ip address 192.168.10.10 255.255.255.0
Router(config-subif)#ex
Router(config)#
Router(config)#int f0/0.20
Router(config-subif)#  
%LINK-5-CHANGED: Interface FastEthernet0/0.20, changed state to up

%LINEPROTO-5-UPDOWN: Line protocol on Interface FastEthernet0/0.20, changed state to up

Router(config-subif)#enca
Router(config-subif)#encapsulation dot1Q 20
Router(config-subif)#ip address 192.168.10.20 255.255.255.0
                              ^
% Invalid input detected at '^' marker.

Router(config-subif)#ip address 192.168.10.20 255.255.255.0
% 192.168.10.0 overlaps with FastEthernet0/0.10
Router(config-subif)#ip address 192.168.20.10 255.255.255.0
Router(config-subif)#ex
Router(config)#
Router(config)#

```
### Testing the connectivity:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/10_3.png)     

---  
## Q11) Implement ACLs to restrict traffic based on source and destination ports. Test rules by simulating legitimate and unauthorized traffic.

### Configuring the Router to allow based on source:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/10_4.png)    

---
### ICMP from a valid Source:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/10_5.png)     

--- 
### ICMP from a invalid Source:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/10_6.png)     

--- 
## Q12) Configure a standard Access Control List (ACL) on a router to permit traffic from a specific IP range. Test connectivity to verify the ACL is working as intended.

### Configuring the Router to allow IP based on the given range:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/10_7.png)    

---
### ICMP from a valid Source:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/10_8.png)     

--- 
### ICMP from a invalid Source:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/10_9.png)     

--- 
## Q13) Create an extended ACL to block specific applications, such as HTTP or FTP traffic. Test the ACL rules by attempting to access blocked services.

### Configuring to block http connections:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/10_10.png)     

--- 
### Trying to access the server:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/10_11.png)     

--- 

## Q14) Try Static NAT, Dynamic NAT and PAT to translate IPs

### CISCO PACKET Tracer Setup:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/14_1.png)     

--- 
## Q14) Try Static NAT, Dynamic NAT and PAT to translate IPs

### CISCO PACKET Tracer Setup:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/14_1.png)     

--- 
### Setting up Static NAT:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/14_2.png)     

---

### NAT Translation Table for Static NAT:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/14_3.png)     

--- 
### Setting up Dynamic NAT:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/14_4.png)     

--- 
### NAT Translation Table for Dynamic NAT:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/14_5.png)     

--- 
### Setting up PAT:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/14_6.png)     

--- 
### NAT TRanslation Table for PAT:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/14_7.png)     

--- 
## Q15) Download iperf in laptop/phone and make sure they are in same network. Try different iperf commands with tcp, udp, bidirectional, reverse, multicast, parallel options and analyze the bandwidth and rate of transmission, delay, jitter etc.

### TCP:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/15_1.png)     

--- 
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/15_2.jpg)     

---
### UDP:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/15_3.png)     

--- 
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/15_4.jpg)     

--- 
### Reverse:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/15_5.png)     

--- 
### Bi-Directional:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/15_6.png)     

--- 
### Jitter:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod7%268/15_7.png)     

--- 

---
END of ASSIGNMENT for Module 7 and 8
---
---


