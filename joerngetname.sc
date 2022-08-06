import java.io.File 
import java.io._
import upickle.default._
import scala.util.control.Breaks._

@main def exec(FolderPath: String, FunctionName: String) = {
   //importCode.c(FolderPath)
   open(FolderPath)
   val x = cpg.method(FunctionName).toJsonPretty
   val jsondata = ujson.read(x)
    for( i <- jsondata.arr){
      if (i("name").str != "<global>"){
	      if(i("astParentFullName").str != "<global>") {
            print(i)
            break
	
         }
      }
	
}


}