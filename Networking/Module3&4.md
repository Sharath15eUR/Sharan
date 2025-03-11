
---
Assignment for Module 3 and 4
---

## Q1) Simulate a small network with switches and multiple devices.Use ping to generate traffic and observe the MAC address table of the switch.Capture packeets using Wireshark to analyze the Ethernet Frames and MAC Addressing.
  
### Packet Tracer
  
We can add different end devices , in this case 4 PC devices and 2 network devices as in the switches and conencted them using the connectivity tool. (As shown in the figure below)
  
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q1_1.jpg)
  
We can check the initial MAC address table of the switches by opening the Switch and navigating to the CLI Tab and typing in the command `show mac-address-table`
  
#### Switch 0
![Q1_2](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q1_2.png)
#### Switch 1
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q1_3.png)

We can generate the traffic using the Ping command. (After initialising the IP configs), we can see the ip addresses of each devices. And we ping every other device from the PC0 using `ping ip-address`
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q1_4.png)  
    
And now when we go see the MAC address table of each switches , we can notice the difference.
  
#### Switch 0
![Q1_2](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q1_5.png)
#### Switch 1
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q1_6.png)

An alternate solution for the wireshark int his case to see the frames is to use the Sniffer in between the switches.

![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q1_8.png)

We can see the ICMP Packet Frame by clicking on the sniffer.
  
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q1_7.png)

### GNS3

Create the similar topology in the GNS3 tool.  
We can set the ip addresses of the end devices using `ip ip-address mask default-gateway` and see the ip using `show ip`
  
#### PC 1
![Q1_2](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q1_9.png)
#### PC 2
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q1_10.png)
  
Generate traffic using ping `ping ip-address`.
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q1_12.png)

Ri8 click on the connection and press on capture packets. It should open the wireshark terminal and show all the captures packets as below.
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q1_13.png)
  
We can double click on a packet to analyze and see the frames.
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q1_14.png)

---

## Q2) Capture and analyze Ethernet Frames using Wireshark. Inspect the Structure of the frame including the destination and source MAC addresses, EtherType,payload and FCS. Use GNS3 or Packet Tracer to simulate the network Traffic.
  
### GNS3

Using the same topology as the previous question and the same ip addresses.

![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q2_1.png)
We can ping and create packets using the `ping` from PC1 to PC2 and open wireshark for that connection.
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q2_2.png)
Double click a frame to analyze it and open it in detail.
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q2_3.png)
We can see the Frame details as below
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q2_4.png)
We can expand the EtherType and see the source and destination mac address.
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q2_5.png)
We can see the protocols.
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q2_6.png)  
ICMP structure:
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q2_7.png)
Payload (reed highlighted is the data):
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q2_8.png)
  
---
  
## Q3) Configure static IP addresses, modify the MAC Addresses and verify the network connectivity using ping and ifconfig commands
  
### Packet Tracer
Create a small topology with 2 end devices and a swithc as shown below.
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q3_1.png)
  
#### Configure the IP:
Click on the device. Go to the Desktop and click on Ip Config. There we can change the modes like DHCP or keep a static IP. Click on the Static (default) and change the IP addresses of the devices.
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q3_2.png)
Check the change by opening the command prompt and using the `ipconfig` command.
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q3_3.png)
Do the same for both the devices.
  
#### Modify the MAC address:
Click on the device. Go to the config tab and choose the ethernet interface. We can chaneg the MAC address of the device there.
Previous:
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q3_4.png)
Modified:
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q3_5.png)


#### To check the conenctivity:
Use the `ping ip-address` command
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q3_6.png)
  
---
    
## Q4) Troubleshoot Ethernet Communication with ping and traceroute using cisco packet tracer:
  - Create a simple LAN setup with 2 linuc machines connected via a switch.
  - Ping from one machine to another. If it fails , use ifconfig to ensure the IP addresses are configured correctly.
  - Use traceroute to indetify where the packets are being dropped if the ping fails.

### CISCO Packet Tracer
Create a similar topology as shown in the figure below.
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q4_!.png)  
Use the `ping ip-address` from one device to another.If it fails like it does here,
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q4_2.png)  
Use the `tracert` Traceroute command to see where the packets are getting lost.As we can see it gets lost from the beginnning.
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q4_3.png)  
Go to the second device and use the `ipconfig` command to ensure its the right IP address.
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q4_4.png)  
Retry with the correct ip address and also run the `tracert` to see the packet path.
![Q1_3](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Images-Mod3%264/Q4_5.png)  

---
    
## Q5) Research the Linux keernel's handlong of Ethernet Devices and network interfaces.Write a short report on how the Linux kernel supports Ethernet communication (referencing kernel.org)
   
### Overview
Linux kernel provides a robust support for the Ethernet communication which thus enables the network capabilities for a wide range of devices. The kernel handles the Ethernet using the networking stack , the device drivers and the network architecture .

### Network Stack
The linux networking aligns itself with the OSI model. It icnludes the Application Layer `(for eg: sockets)` , Transport Layer `TCP and UDP protocols`, Network Layer `IP routign and addressing` , Data Link `Ethernet Frame Processing, MAC address handling` and Physical Layer `NIC`.
   
### Network Interface Configuration
The linux kernel represents the devices as network interfaces as in `eth0` `eth1` etc.
To list all available interfaces we can use `ip link show`
To bring an interface up `ip link set eth0 up`
It also includes tools to analyse the interfaces, for exampel to check the interface statistics we can use `ethtool eth0`.
   
### Ethernet Device Drivers
Ethernet Drievrs require the kernel devices to function. The kernel provides a variety of drivers for different NICs , located in the `drivers/net/ethernet`. These drivers interact using the PCI/PCIe busses and include interrupt handling as well.
To check loaded network driver we can use `lsmod | grep e1000e`

### Packet Processing

#### Packets Transmission:
The application sends the data through the sockets. The data are basically encapsulated into packets using the TCP/IP protocols. The kernel then invokes driver functions to send the packet like `ndo_start_xmit`.The drievr then prepares the DMA that point the packet data in the memory.

#### Packet Receiving:
The NIC generates an interrupt when a packet arrives. The driver reads the incoming packets from hardware buffers. NICs optimize this using technologies like NAPI (new API) to reduce the CPU overhead.
To monitor the packet flow we can use commadns like `tcpdump -i eth0`.
   
---
    
## Q6) Describe how you would configure a basic LAN interface using the IP command in Linux (kernel.org)

We can configure LAN interfaces using the `ip` command.

 - To list all the available network interfaces:  
      `ip link show`
 - To add an interface:  
      `ip addr add 192.168.1.40/24 dev eth0`
 - To delete an interface:  
      `ip route delete 192.168.1.40/24 dev eth0`
 - To modify the default gateway:  
      `ip route add default via 192.168.1.254 dev eth0`
 - To show ip address assigned to interfaces:  
      `ip addr show`
 - To show the routing table:  
      `ip route show`

  
---
    
## Q7) Use Linux to view the MAC Address Table of a switch (if using a Linux based network switch). Use the bridge or ip link command to inspect the MAC table and demonstrate a basic switch operation.

To view the MAC address Table:
```
admin@Ubuntu:~$ ip link show enp0s3
2: enp0s3: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc fq_codel state UP mode DEFAULT group default qlen 1000
    link/ether 08:00:27:b4:64:ad brd ff:ff:ff:ff:ff:ff
admin@Ubuntu:~$ 
admin@Ubuntu:~$
```
Using the Ip command:
```
admin@Ubuntu:~$ ip neigh show
10.0.2.2 dev enp0s3 lladdr 52:55:0a:00:02:02 STALE 
10.0.2.3 dev enp0s3 lladdr 52:55:0a:00:02:03 STALE 
fd00::2 dev enp0s3 lladdr 52:56:00:00:00:02 router STALE 
fe80::2 dev enp0s3 lladdr 52:56:00:00:00:02 router STALE
```
Using the Bridge command:
```
admin@Ubuntu:~$ bridge fdb show enp0s3
01:00:5e:00:00:01 dev enp0s3 self permanent
33:33:00:00:00:01 dev enp0s3 self permanent
33:33:ff:b4:64:ad dev enp0s3 self permanent
01:00:5e:00:00:fb dev enp0s3 self permanent
33:33:ff:9b:a7:ad dev enp0s3 self permanent
33:33:00:00:00:fb dev enp0s3 self permanent
admin@Ubuntu:~$ 
admin@Ubuntu:~$ 
```
Basic Switch operations:
 - Show bridge interfaces:   
       `admin@Ubuntu:~$ bridge link show`
 - Add a bridge Interface:   
       `admin@Ubuntu:~$ bridge fdb add 00:11:22:33:44:55 dev eth0 master br0`
 - Show bridge Vlans:   
```
   admin@Ubuntu:~$ bridge vlan show
port              vlan-id  
admin@Ubuntu:~$
```
 - Delete a bridge:  
       `ip link delete bridge1`
 - Add a port to bridge:   
       `ip link set dev enp0s3 master bridge1`


---
END of ASSIGNMENT for Module 3 and Module 4
---
---
       




