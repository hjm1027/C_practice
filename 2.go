package main

import (
	"fmt"

	"github.com/360EntSecGroup-Skylar/excelize"
)

func main() {
	f, err := excelize.OpenFile("./1.xlsx")
	if err != nil {
		fmt.Println(err)
		return
	}
	// Get value from cell by given worksheet name and axis.
	//cell, err := f.GetCellValue("公共课", "B2")
	//if err != nil {
	//	fmt.Println(err)
	//	return
	//}
	//fmt.Println(cell)
	// Get all the rows in the Sheet1.
	rows, err := f.GetRows("公共课")
	for _, row := range rows {
		//	for i, colcell := range row {
		//		if i == 1 {
		if len(row) != 0 {
			fmt.Print(row[2], "\t")
		} //else {
		//fmt.Print(error)
		//}
		//		}
		//	}
		//		fmt.Println()
	}
}
