# rc
因为经常使用rm之后又后悔了，想要撤回却无能为力，所以自己写了一个安全的rm
## 安装
`sudo bash install.sh`
## 使用方法
`rc filename`
> 安装后rc位于`/usr/bin`下文件夹也可以删除，目前还不用加-r，删除的文件会保存在`~/.recycle`文件夹下，暂不支持自动恢复,可手动恢复。
