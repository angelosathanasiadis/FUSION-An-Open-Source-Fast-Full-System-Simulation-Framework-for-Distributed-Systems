# FUSION QEMU BUILD INSTRUCTIONS

cd qemu/net
make all
cd qemu/
./configure --target-list=riscv64-softmmu,aarch64-softmmu,x86_64-softmmu --enable-slirp
make -j $(nproc)
