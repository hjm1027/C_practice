#

Go有什么优势

* 可直接编译成机器码，不依赖其他库，glibc的版本有一定要求，部署就是扔一个文件上去就完成了。
* 静态类型语言，但是有动态语言的感觉，静态类型的语言就是可以在编译的时候检查出来隐藏的大多数问题，动态语言的感觉就是有很多的包可以使用，写起来的效率很高。
* 语言层面支持并发，这个就是Go最大的特色，天生的支持并发，我曾经说过一句话，天生的基因和整容是有区别的，大家一样美丽，但是你喜欢整容的还是天生基因的美丽呢？Go就是基因里面支持的并发，可以充分的利用多核，很容易的使用并发。
* 内置runtime，支持垃圾回收，这属于动态语言的特性之一吧，虽然目前来说GC不算完美，但是足以应付我们所能遇到的大多数情况，特别是Go1.1之后的GC。
* 简单易学，Go语言的作者都有C的基因，那么Go自然而然就有了C的基因，那么Go关键字是25个，但是表达能力很强大，几乎支持大多数你在其他语言见过的特性：继承、重载、对象等。
* 丰富的标准库，Go目前已经内置了大量的库，特别是网络库非常强大，我最爱的也是这部分。
* 内置强大的工具，Go语言里面内置了很多工具链，最好的应该是gofmt工具，自动化格式化代码，能够让团队review变得如此的简单，代码格式一模一样，想不一样都很困难。
* 跨平台编译，如果你写的Go代码不包含cgo，那么就可以做到window系统编译linux的应用，如何做到的呢？Go引用了plan9的代码，这就是不依赖系统的信息。
* 内嵌C支持，前面说了作者是C的作者，所以Go里面也可以直接包含c代码，利用现有的丰富的C库。

2、Go适合用来做什么服务器编程，以前你如果使用C或者C++做的那些事情，用Go来做很合适，例如处理日志、数据打包、虚拟机处理、文件系统等。分布式系统，数据库代理器等网络编程，这一块目前应用最广，包括Web应用、API应用、下载应用、内存数据库，前一段时间google开发的groupcache，couchbase的部分组建云平台，目前国外很多云平台在采用Go开发，CloudFoundy的部分组建，前VMare的技术总监自己出来搞的apcera云平台。




##go语言几个最快最好运用最广的web框架比较

Go是一种快速增长的开源编程语言，旨在构建简单，快速，可靠的软件。 看看哪些伟大的公司使用Go来为他们的服务提供支持。

本文提供了所有必要的信息，以帮助开发人员了解有关使用Go开发Web应用程序的最佳选项的更多信息。

本文包含了最详细的框架比较，通过从尽可能多的角度比较最知名的Web框架：流行度，支持和内置功能：

Beego：Go编程语言的开源，高性能Web框架。

https://github.com/astaxie/beego

https://beego.me

Buffalo：快速Web开发w/Go。

https://github.com/gobuffalo/buffalo

https://gobuffalo.io

Echo：高性能，极简主义的Go Web框架。

https://github.com/labstack/echo

https://echo.labstack.com

Gin：用Go（Golang）编写的HTTP Web框架。它具有类似Martini的API，具有更好的性能。

https://github.com/gin-gonic/gin

https://gin-gonic.github.io/gin

Iris：Go in the Universe中最快的Web框架。MVC功能齐全。今天拥抱未来。

https://github.com/kataras/iris

https://iris-go.com

Revel：Go语言的高生产力，全栈Web框架。

https://github.com/revel/revel

https://revel.github.io
