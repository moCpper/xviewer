- 封装了ffmpeg的编解码、解封装和基于SDL的渲染接口，并使用责任链模式再次封装了rtsp的多线程解封装、编解码以及渲染。
- 界面基于QT开发，完成了右键菜单调整预览窗口数量1_4_9_16，默认为4窗口渲染，以及右键设置相机配置的读取显示以及增删改，
- 用户通过鼠标拖拽到指定渲染窗口实现rtsp相机的播放。
- 完成了多路音视频录制模块，并根据配置按时自动存储多个.MP4
- 继承QT的QCalendarWidget实现点击摄像机刷新日历并标注存有音视频的日期，并显示以及选择回放。
- 完成回放音视频的同步，播放速度控制，显示播放进度，暂停播放以及SEEK进度条控制。