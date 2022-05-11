# 305team
## 在线考试系统数据库分工说明
### 基本表
考生表：examineeId，examineeName,examineeSex,examineeAge,tel,email,account,password.(此表存储学生基本信息)
教师表：teaId,teaName,TeaSex,teaAge,tel,email,account,password,major,teaGrade.(此表存储教师基本信息以及专业，级别)
题库表：subjectId,subject,answer.（此表存储所有的题以及标准答案）
试卷表：paperId,subject,teaId,teaName.(此表存储)
答卷表：answerPaperId,examineeId,subject,examineeAnswer,score.
### 视图
考试信息：testId,paperId,examineeId.
答卷信息：examineeId,paperId,subject,examineeAnswer.
个人成绩：examineeId,paperId,paperscore(答卷表中score的总和，即总分).(考生视角)
考生成绩：paperId,examineeId,paperscore.(教师视角，按试卷)
### 函数
注册：register().(输入用户名，昵称，角色进行注册)
登录：login().(显示用户名，昵称，角色，注册时间)


