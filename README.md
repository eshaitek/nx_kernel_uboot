# nx_kernel_uboot

build nx kernel
1. export ARCH=arm64

2. export CROSS_COMPILE={path}/gcc-linaro-7.3.1-2018.05-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu-

3. cd sources/kernel/kernel-4.9/

4. make tegra_defconfig

5. use make menuconfig to change local version to  "-tegra"

6. make -j4

https://developer.ridgerun.com/wiki/index.php?title=Jetson_Xavier_NX/Development/Building_the_Kernel_from_Source


build nx uboot

1. export CROSS_COMPILE={path}/gcc-linaro-7.3.1-2018.05-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu-

2. cd uboot

3. make p2771-0000-500_defconfig

4. make -j4
