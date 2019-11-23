package course

import (
	"github.com/MuxiKeStack/muxiK-StackBackend/handler"
	"github.com/MuxiKeStack/muxiK-StackBackend/model"
	"github.com/MuxiKeStack/muxiK-StackBackend/pkg/errno"
	"github.com/MuxiKeStack/muxiK-StackBackend/pkg/token"

	"github.com/gin-gonic/gin"
	"github.com/lexkong/log"
)

type ModifyCourse struct {
	Hash    string
	Name    string
	Credit  float32
	Teacher string
	Time1   string
	Place1  string
	Time2   string
	Place2  string
	Time3   string
	Place3  string
	Weeks1  string
	Weeks2  string
	Weeks3  string
}

//修改课程信息
func ModifyCourse(c *gin.Context) {
	log.Info("Cource modify function is called.")
	var data ModifyCourse
	if err := c.ShouldBindJSON(&data); err != nil {
		handler.SendError(c, errno.ErrBind, nil, err.Error())
		return
	}

	hash := c.Mustget("hash")

	coursehash := course.GetByHash()
	if err := course.ModifyCourse(hash); err != nil {
		handler.SendError(c, err, nil, err.Error())
		return
	}

	handler.SendResponse(c, nil, nil)
}
