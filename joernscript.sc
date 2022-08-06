import java.io.File 
import java.io._
import upickle.default._

@main def exec(FolderPath: String) = {
   //importCode.c(FolderPath)
   open(FolderPath)
   val y = cpg.method.toJson
   val jsondata = ujson.read(y)
   
    for( i <- jsondata.arr){
      if (i("name").str != "<global>"){
	      if(i("astParentFullName").str != "<global>") {
	         print(i("filename").str + "%")
	         val varjson = cpg.method(i("name").str).local.toJsonPretty 
	         val st = cpg.method((i("name").str)).l
	         print(cpg.method(i("name").str).local.toJson + "%")
	

	
}
}
}
}