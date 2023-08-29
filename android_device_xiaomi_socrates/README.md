# android_device_xiaomi_socrates
Device tree for Redmi K60 Pro(socrates, sm8550)

## 注意
 - 编译后使用预编译的vendor_boot或许能开机
 - 本人在fastbootd下刷入```product, system, system_ext```, 关闭avb校验后能开机

## Bugs
 - `setrnforce 1` 后触屏不工作（开机后再`setenforce 1`对触屏无影响）
 - 震动不工作
 - 通话无声音，在20秒时自动挂断
 - 短信收不到（可能会概率收到）
 - 指纹、人脸不工作
 - 相机：无法切换多摄像头
 - 应该还有很多

### PS
 - 本人能力有限，随缘修^_^
