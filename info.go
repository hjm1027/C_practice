package handle

import "log"

func GetCourseInfo(hash string) (*model.UsingCourseInfo, error){
	var data UsingCourseInfo
	if data, err := course.GetByHash, err != nil{
		log.Info("GetCourseInfoById function error.")
		return info, nil 
	}
	return data, nil
}
