function mySearch(e) {
  var key = event.which || event.keyCode;
  var input = document.querySelector('#search');
  if (key === 13 && input !== ''){
    doSearch();
  }
}

var itemList = {
    "sp001":{
        "name":"Clock World",
        "gia":75000,
        "photo":"./images/sanpham/sp1.jpg"
    },

    "sp002":{
        "name":"Trà Hoa Nữ",
        "gia":80000,
        "photo":"./images/sanpham/sp2.jpg"
    },

    "sp003":{
        "name":"Hoàng Tử Bé",
        "gia":99000,
        "photo":"./images/sanpham/sp3.jpg"
    },

    "sp004":{
        "name":"Tiểu thuyết Aftermath – Ác Quỷ Rừng Phế Tích",
        "gia":60000,
        "photo":"./images/sanpham/sp4.jpg"
    },

    "sp005":{
        "name":"Tiểu thuyết Long Thần Tướng",
        "gia":99000,
        "photo":"./images/sanpham/sp5.jpg"
    },

    "sp006":{
        "name":"Anne Tóc đỏ dưới Mái nhà Bạch Dương",
        "gia":38000,
        "photo":"./images/sanpham/sp6.jpg"
    },
    "sp007":{
        "name":"Bánh Răng Khởi Nghiệp",
        "gia":99000,
        "photo":"./images/sanpham/sp7.jpg"
    },
	"sp008":{
        "name":"Profit First – Dòng Tiền Gắn Liền Lợi Nhuận",
        "gia":75000,
        "photo":"./images/sanpham/sp8.jpg"
    },
    "sp009":{
        "name":"Kẻ Khôn Đi Lối Khác",
        "gia":95000,
        "photo":"./images/sanpham/sp9.jpg"
    },
	"sp010":{
        "name":"Hãy Cứ Khát Khao – Hãy Mãi Dại Khờ",
        "gia":55000,
        "photo":"./images/sanpham/sp10.jpg"
    },
	"sp011":{
        "name":"Người Giỏi Không Phải Là Người Làm Tất Cả",
        "gia":45000,
        "photo":"./images/sanpham/sp11.jpg"
    },
	"sp012":{
        "name":"Đắc Nhân Tâm",
        "gia":40000,
        "photo":"./images/sanpham/sp12.jpg"
    },
	"sp013":{
        "name":"Bí Ẩn Làng Ma Sói",
        "gia":75000,
        "photo":"./images/sanpham/sp13.jpg"
    },
	"sp014":{
        "name":"Đồi Gió Hú",
        "gia":54000,
        "photo":"./images/sanpham/sp14.jpg"
    },
	"sp015":{
        "name":"Tâm Lý Người An Nam",
        "gia":45000,
        "photo":"./images/sanpham/sp15.jpg"
    },
	"sp016":{
        "name":"Nhóm Máu O - Tập 1",
        "gia":20000,
        "photo":"./images/sanpham/sp16.jpg"
    },
	"sp017":{
        "name":"Địa Ngục Môn",
        "gia":55000,
        "photo":"./images/sanpham/sp17.jpg"
    },
	"sp019":{
        "name":"Nhóm Máu O - Tập 2",
        "gia":30000,
        "photo":"./images/sanpham/sp19.jpg"
    },
	"sp018":{
        "name":"Truyện Kiều và Tarot",
        "gia":155000,
        "photo":"./images/sanpham/sp18.jpg"
    },
	"sp020":{
        "name":"Xứ Đông Dương",
        "gia":153000,
        "photo":"./images/sanpham/sp20.jpg"
    }

};


function themsp(code) {
  let number = parseInt(document.getElementById(code).value);
  if(number == 0)
    return;
  if(typeof localStorage[code] === "undefined"){ //gán biến code cho một giá trị
	window.localStorage.setItem(code, number);
    alert("Thêm vào giỏ hàng thành công. Tổng số lượng đã thêm là: "+number+".");
  }

  else {
	current = parseInt(window.localStorage.getItem(code));
	if(number + current > 50) {
      window.localStorage.setItem(code, 50);
	  alert("Tổng số lượng thêm vào giỏ hàng không thể vượt quá 50.");
      return;
	}
    else {
      window.localStorage.setItem(code, number+current);
      alert("Thêm vào giỏ hàng thành công. Tổng số lượng đã thêm là: "+(number+current)+".");
    }
  }
}

function xoasp(code){
  if(typeof window.localStorage[code] !== "undefined"){
    window.localStorage.removeItem(code);
    document.getElementById("ct_giohang").getElementsByTagName('tbody')[0].innerHTML="";
    hienthi_sp();
  }
}


function hienthi_sp(){
  var tbody = document.getElementById("ct_giohang").getElementsByTagName("tbody")[0];
  tbody.innerHTML = "";
  //tbody.style.backgroundColor = "#ffff";
  
  var formatter = new Intl.NumberFormat('vi-VN', {
	style: 'currency',
	currency: 'VND'
  });
  var tong_thue = 0;
  for(let i = 0; i < window.localStorage.length; i++){
    if(typeof itemList[localStorage.key(i)] === "undefined")
	  continue;
    var key   = window.localStorage.key(i);
    var item  = itemList[key];
    var qty   = localStorage.getItem(key);

    var photo = document.createElement("td");
    photo.innerHTML = "<img src='"+item.photo+"' width='100px'/>";
    photo.style.textAlign = "center";

    var name = document.createElement("td");
    name.innerHTML = item.name;

    var sl = document.createElement("td");
    sl.innerHTML = qty;
    sl.style.textAlign = "center";

    var gia = document.createElement("td");
    gia.innerHTML = formatter.format(item.gia);
    gia.style.textAlign = "center";

    var tong = document.createElement("td");
    tong.innerHTML = formatter.format(item.gia * qty);
    tong.style.textAlign = "center";
    tong_thue += item.gia * qty;

    var bin = document.createElement("a");
    bin.innerHTML = "<i class='fa fa-trash trash-icon'></i>";
    bin.setAttribute("href", "#");
    bin.setAttribute("data-code", key);
    bin.onclick = function(){ xoasp(this.dataset.code) };

    var xoa = document.createElement("td")
    xoa.appendChild(bin);
    xoa.style.textAlign = "center";

    var row = document.createElement("tr");
    row.appendChild(photo);
    row.appendChild(name);
    row.appendChild(sl);
    row.appendChild(gia);
    row.appendChild(tong);
    row.appendChild(xoa);
    tbody.appendChild(row);
  }
  
  var thue = 0.08*(tong_thue);
  document.getElementById("bill_tong_thue").innerHTML = formatter.format(tong_thue);
  document.getElementById("bill_thue").innerHTML = formatter.format(thue);
  document.getElementById("bill_tong").innerHTML = formatter.format(tong_thue+thue);
}

/*Phuc*/
// form DK
function FormDK() {
    var emailReg = /^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,4}$/;
    var frm = document.forms['box_Form'];
    
    if ( frm.name.value.length<10) {
      alert("Vui lòng nhập Họ & Tên của bạn.");
      frm.name.focus();
      return false;
    }
	
    if ( emailReg.test(frm.email.value) == false ) {
      alert("Vui lòng nhập email hợp lệ.");
      frm.email.focus();
      return false;
    }
    if ( frm.psw.value.length<8 ) {
      alert("Mật khẩu có tối thiểu 8 ký tự.");
      frm.psw.focus();
      return false;
    }
    if ( frm.psw2.value.length<8 ) {
      alert("Mật khẩu có tối thiểu 8 ký tự.");
      frm.psw2.focus();
      return false;
    }
    if ( frm.psw.value.length!= frm.psw2.value.length) {
      alert("Mật khẩu và Nhập lại mật khẩu phải giống nhau.");
      frm.psw.focus();
      return false;
    }
    alert("Đã gửi dữ liệu Đăng ký.");
    return true;
}
// form DN
  function FormDN() {
    var emailReg = /^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,4}$/;
    var frm = document.forms['box_Form'];
    if ( emailReg.test(frm.email.value) == false ) {
      alert("Vui lòng nhập email hợp lệ.");
      frm.email.focus();
      return false;
    }
    if ( frm.psw.value.length<8 ) {
      alert("Mật khẩu có tối thiểu 8 ký tự.");
      frm.psw.focus();
      return false;
    }
    alert("Đã gửi dữ liệu Đăng nhập");
    return true;
  }
// form LH
  function FormLH() {
    var emailReg = /^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,4}$/;
    var frm = document.forms['box_Form'];
    // hoten
    if ( frm.name.value.length<10) {
      alert("Vui lòng nhập Họ & Tên của bạn.");
      frm.name.focus();
      return false;
    }
    // email
    if ( emailReg.test(frm.email.value) == false ) {
      alert("Vui lòng nhập email hợp lệ.");
      frm.email.focus();
      return false;
    }
    if(frm.topic.value.length < 3){
      alert("Vui long nhap chu de.");
      frm.topic.focus();
      return false;
    }
    //noi dung lien he
    if ( frm.message.value.length<20) {
      alert("Nội dung cần liên hệ quá ngắn, vui lòng từ 20 ký tự trở lên.");
      frm.message.focus();
      return false;
    }
    alert("Đã gửi dữ liệu Liên hệ.");
    return true;
  }