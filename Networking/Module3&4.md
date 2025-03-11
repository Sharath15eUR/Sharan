
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


