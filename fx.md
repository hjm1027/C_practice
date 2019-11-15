## HTTP工作原理

网络爬虫抓取过程可以理解为模拟浏览器操作的过程。

浏览器的主要功能是向服务器发出请求，在浏览器窗口中展示您选择的网络资源，HTTP是一套计算机通过网络进行通
信的规则。

# HTTP的请求与响应

HTTP通信由两部分组成： 客户端请求消息 与 服务器响应消息

![](https://images2018.cnblogs.com/blog/1452465/201807/1452465-20180731092412688-502817083.jpg)

浏览器发送HTTP请求的过程：

   * 当用户在浏览器的地址栏中输入一个URL并按回车键之后，浏览器会向HTTP服务器发送HTTP请求。HTTP请求主要
分为“Get”和“Post”两种方法。

   * 当我们在浏览器输入URL http://www.baidu.com 的时候，浏览器发送一个Request请求去获取 http://www.baidu.com 的html文件，服务器把Response文件对象发送回给浏览器。

   * 浏览器分析Response中的 HTML，发现其中引用了很多其他文件，比如Images文件，CSS文件，JS文件。 浏览器
会自动再次发送Request去获取图片，CSS文件，或者JS文件。

   * 当所有的文件都下载成功后，网页会根据HTML语法结构，完整的显示出来了。

URL（Uniform / Universal Resource Locator的缩写）：统一资源定位符，是用于完整地描述Internet上网页和其>他资源的地址的一种标识方法。
~                                                                                                     
~                                  
