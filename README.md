# NetTool-rp2350b

RP2350B 网络巡线对线仪固件源码。

本仓库**仅包含当前固件实际编译依赖的源文件与头文件**（由 `compile_commands.json` + `gcc -MM` 收集），不包含未使用的 RT-Thread BSP / 组件。

## 目录结构

```
NetTool-rp2350b/
├── rt-thread/                 # 实际用到的内核、组件、驱动、本板 BSP
│   └── bsp/raspberry-pico/RP2350/
│       ├── CMakeLists.txt
│       ├── applications/
│       ├── board/
│       └── packages/          # LVGL / Pico SDK（仅依赖部分）
├── HZK12 / HZK16              # 字库
└── build.bat
```

## 构建

```bat
cd rt-thread\bsp\raspberry-pico\RP2350
mkdir build-ninja & cd build-ninja
cmake -G Ninja ..
ninja rtthread.elf
```

依赖：ARM GNU Toolchain、CMake、Ninja。

## FinSH 示例

```text
ch390_dhcp
tcp_probe 192.168.91.99 22
http_get 192.168.91.1
ws_probe 192.168.91.99 80 /
dns_lookup baidu.com
```
