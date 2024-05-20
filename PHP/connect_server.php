<?php
 $severname="localhost";
 $username="root";
 $password="";
 $database="haodev"; //thay doi ten csdl cho phu hop voi cua ban
 
 $conn= mysqli_connect("$severname", "$username", "$password", "$database");
 
 if(!$conn){
	 echo ("Kết nối không thành công!");	 
 }else{
	echo "";
 }

 ?>
 
