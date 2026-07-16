# NetTool-rp2350b

RP2350B 网络巡线对线仪固件 — RT-Thread BSP，含 CH390 以太网与 FinSH 网络工具。

## 功能

- **CH390 网卡**：DHCP、ping、链路状态
- **端口探测**：`tcp_probe`、`udp_probe`
- **应用层探测**：`http_get`、`ws_probe`
- **网络工具**：`dns_lookup`、`arp`、`eth_info`、`ssdp_*`、`link_blink`

## 目录说明

本仓库为 RP2350 BSP 工程。需配合 [RT-Thread](https://github.com/RT-Thread/rt-thread) 使用：

1. 克隆 RT-Thread
2. 将本仓库内容放到 `rt-thread/bsp/raspberry-pico/RP2350/`
3. 将 `rt-thread-patches/` 下文件覆盖到对应 RT-Thread 路径（CH390 驱动等）

## 构建

```bash
cd build-ninja
cmake -G Ninja ..
ninja rtthread.elf
```

UF2 转换（RP2350）：

```bash
picotool uf2 convert rtthread.elf rtthread.uf2 --family rp2350-arm-s --abs-block
```

## FinSH 示例

```text
ch390_dhcp
tcp_probe 192.168.91.99 22
http_get 192.168.91.1
ws_probe 192.168.91.99 80 /
dns_lookup baidu.com
```
