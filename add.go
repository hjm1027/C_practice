package handlei

import (
	"regexp"
	"strconv"
	"strings"

	"github.com/MuxiKeStack/muxiK-StackBackend/handler"
	"github.com/MuxiKeStack/muxiK-StackBackend/model"
	"github.com/MuxiKeStack/muxiK-StackBackend/pkg/errno"
	"github.com/MuxiKeStack/muxiK-StackBackend/service"

	"github.com/360EntSecGroup-Skylar/excelize"
)

func MultiplicationHash(string key) string {
	var hash = 0
	var i = 0
	for ; i < key.length(); i += 1 {
		hash = 33*hash + key.charAt(i)
	}
	return hash
}

func AddCourse() {
	f, err := excelize.OpenFile("./1.xlsx")
	if err != nil {
		fmt.Println(err)
		return
	}
	rows, err := f.GetRows("公共课")
	for _, row := range rows {
		scourseid := strconv.Itoa(row(2))
		key := scourseid + row(8)
		onecourse := Model.UsingCourseModel{
			Hash:     MultiplicationHash(key),
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
		//for i, colCell := range row {
		//	if i == 1 {
		//		fmt.Print(row, "\t")
		//	}
		//}
		//      fmt.Println()
	}
}
