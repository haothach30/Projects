<?php
if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    $ten = $_POST['ten'];
    $tinhthanh = $_POST['tinhthanh'];
    $email = $_POST['email'];
  //them mot so truong thong tin theo cau de bai
  

 $severname="localhost";
 $username="root";
 $password="";
 $database="haodev";
 
 $conn= mysqli_connect("$severname", "$username", "$password", "$database");
 
 if(!$conn){
	 echo ("Kết nối không thành công!");	 
 }else{
	echo "";
 }


    //thuc hien truy van du lieu chen vao bang
    //tao mot bang co ten phu hop trong csdl da tao
    $sql = "INSERT INTO customers (ten, tinhthanh, email) 
            VALUES ('$ten', '$tinhthanh', '$email')";
    
    if ($conn->query($sql) === TRUE) {
        echo "<script>alert('Đăng Ký Thành Công!');</script>";
        header("refresh:2;url=dangki.html");
        exit();
    } else {
        echo "Lỗi: " . $conn->error;
    }
    $conn->close();
}
?>
