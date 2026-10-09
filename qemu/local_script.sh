#!/usr/bin/env bash
# setup_network.sh � configure network interfaces

set -e

# Must run as root
if [ "$EUID" -ne 0 ]; then
  echo "??  Please run this script as root or via sudo."
  exit 1
fi

# Variables
IFACE="enp0s1"
MAC="00:90:00:00:00:01"
IP="192.168.0.3"
NETMASK="255.255.255.0"

# 1) Change the MAC address
ifconfig "$IFACE" hw ether "$MAC"

# 2) Ensure loopback is up and configured
ifconfig lo 127.0.0.1 up

# 3 & 4) Set the IP and netmask (and bring the interface up)
ifconfig "$IFACE" "$IP" netmask "$NETMASK" up

echo "?  Network interface $IFACE configured:"
echo "    � MAC      = $MAC"
echo "    � Address  = $IP"
echo "    � Netmask  = $NETMASK"
