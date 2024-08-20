# Github/Git 学习汇报
熊思源

---
## Git文件状态简介
 - committed ：表示该文件已经被安全地保存在本地数据库中了
 - modified：表示修改了某个文件，但还没有提交保存
 - staged ：表示把已修改的文件放在下次提交时要保存的清单中

 ---
 ## Git的基本工作流程：
 - 在工作目录中修改某些文件
 - 保存到暂存区域
 - 提交更新，转储到git目录中

 ---
 ## 初次运行Git前的配置
 - 配置用户信息
 - 设置文本编辑器
 - 设置差异分析工具

 ---
 ## Git常用命令介绍
 - 创建git仓库
- 检查文件状态：
从现有目录创建：切换到现有目录，git init
从现有仓库创建： git clone [url网址]
git status
 - 添加文件到暂存区域
git add 文件名
git add -A :提交所有文件到暂存区域
- 提交文件到git目录
将暂存区域提交：git commit -m “文件说明”
- 移除文件
git rm 文件名
git rm -f 文件名 ：删除暂存区的文件
- 比较文件修改的差异
git diff
- 移动文件或者重命名文件
git mv origin_filename rename_filename
- 查看提交历史
git log
- 回退到以前的版本
git reset –hard 版本号

