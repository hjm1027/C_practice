package course

import (
	"regexp"
	"strconv"
	"strings"
	"crypto/md5"

	_ "github.com/MuxiKeStack/muxiK-StackBackend/handler"
	_ "github.com/MuxiKeStack/muxiK-StackBackend/model"
	_ "github.com/MuxiKeStack/muxiK-StackBackend/pkg/errno"
	_ "github.com/MuxiKeStack/muxiK-StackBackend/pkg/token"

	"github.com/gin-gonic/gin"
)

//增加一个课程
func AddCourse(c *gin.Context) {
		f, err := excelize.OpenFile("./1.xlsx")
		if err != nil {
			fmt.Println(err)
			return
		}
		rows, err := f.GetRows("公共课")
		for _, row := range rows {
			scourseid := strconv.Itoa(row(2))
			key := scourseid + row(8)
			md5lnst := md5.New()
    		md5lnst.Write([]byte(key))
    		result := md5lnst.Sum([]byte(""))
			onecourse := Model.UsingCourseModel{
				Hash:     result,
				Name:     row(1),
				CourseId: row(2),
				ClassId:  row(3),
				Credit:   row(4),
				Teacher:  row(8),
				//Type:			      ,
				//CreditType:		  ,
				Time1:  row(10),
				Place1: row(11),
				Time2:  row(12),
				Place2: row(13),
				Time3:  row(14),
				Place3: row(15),
				Weeks1: row(10),
				Weeks2: row(12),
				Weeks3: row(14),
				//Region:              ,
			}
			model.add(&onecourse)
		}
	}
}
