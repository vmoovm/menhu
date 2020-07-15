
$(function(){
	//个人信息的显示与隐藏
	$(".user-infor").hover(function(){
        if(!$('#userhead').attr('src')){
            $('#userhead').attr('src', $('#userhead').attr('data-original'));
        }
		$(this).find('.user-info').fadeIn(200);
	},function(){
		$(this).find('.user-info').fadeOut(200);
	});

   //注册登录弹窗的显示和隐藏
	$(".user-top .register").click(function(){
		showLogin('注册包图网', 'QQ一键注册');
	});
	$(".Login .close-but").click(function(){
		$(".Login").fadeOut(300);
        $("#inspire-login-mask").hide();
	});

	// 返回顶部
    $("body").on("click","#gotop",function(e) {
        $('body,html').animate({scrollTop:0},300);
    });
    $(window).scroll(function(e) {
        if($(window).scrollTop()>200)
            $("#gotop").show();
        else
            $("#gotop").hide();
    });

    var formSearch = function(){
        var kw = $.trim($('#so-kw').val());
        if(kw == ''){
            alert('请填写关键词');
            return false;
        }
    }
    $('.but-search').on('click', formSearch);
    $('#so-kw').keydown(function(event){if(event.which == 13){formSearch();}});

  

});

$(function(){
    var loaded = false;
    var a=true;
    $(".fixed-but .my-browse-but").click(function(event){
        event.stopPropagation();
        if(a){
            $('#browse').animate({right:'0'},"fast");
            $(".fixed-but").animate({right:'250px'},"fast");
                a=false;
                $('.my-browse-but').addClass('my-browse-but-on');
        }else{
            $('#browse').animate({right:'-300px'},"fast");
            $(".fixed-but").animate({right:'0'},"fast");
            a =true;
            $('.my-browse-but').removeClass('my-browse-but-on');
       }
    });

    $(".close-but").click(function(event){
        event.stopPropagation();
        $('#browse').animate({right:'-300px'},"fast");
        $(".fixed-but").animate({right:'0'},"fast");
        a =true;
        $('.my-browse-but').removeClass('my-browse-but-on');
    });

    //点击页面其它地方隐藏我浏览过的
    $('#main').click(function(event){
        event.stopPropagation();
        $('body').find("#browse").animate({right:'-300px'},"fast");
        $(".fixed-but").animate({right:'0'},"fast");
        a =true;
        $('.my-browse-but').removeClass('my-browse-but-on');
    });

    $("#browse").hover(function(event){
        var top = $(document).scrollTop();
        $(document).scroll(function(){
            $(window).scrollTop(top);
        });

    },function(){
        $(document).unbind('scroll');
    });

    //首页导航的样式
    $(".ycl").hover(function(){
        $(".yclNew").attr('id','');
        $(this).attr('id','on_current');
        $(this).siblings('.sub-classfiy').css('display','');
    },function(){
        $(this).attr('id','');
        $(this).siblings('.sub-classfiy').css('display','none');
        $(".yclNew").attr('id','on_current');
    });
    //子导航样式
    /*$(".sub-classfiy").hover(function(){
        $(".yclNew").attr('id','');
        $(this).siblings('.ycl').attr('id','on_current');
        $(this).css('display','');
    },function(){
        $(this).css('display','none');
        $(this).siblings('.ycl').attr('id','');
        $(".yclNew").attr('id','on_current');
    })*/

});



var D = 0;
function topkey(H) {
    if (window.event) {
        var G = window.event.keyCode;
    } else {
        var G = H.which;
    }
    if (G != 38 && G != 40 && G != 13) {
        D = 0;
    } else {
        if ($("#z_xiala").css("display") == "block") {
            var I = $(".z_spanName").length;
            if (G == 38) {
                D--;
                if (D < 1) {
                    D = I;
                    C(D);
                    F(1);
                } else {
                    F(D + 1);
                    C(D);
                }
                return false;
            }
            if (G == 40) {
                D++;
                if (D > I) {
                    D = 1;
                    C(1);
                    F(I);
                } else {
                    F(D - 1);
                    C(D);
                }
                return false;
            }
        } else {
            D = 0;
        }
    }
}

function C(G) {
    $("#u_" + G).css("background-color", "#EBEBEB");
    var name = $("#u_" + G + " .z_spanName").html()
    $('#sort').val("#u_" + G)
    $('#so-kw').val(name)
}
function F(G) {
    $("#u_" + G).css("background-color", "#fff");
}
//统计点击位置
function tj_keyword(){
    var sort = $('#sort').val()
    $.ajax({
        type: 'POST',
        url: 'http://ajax.888pic.com/?m=search&a=index',
        data: {sort:sort},
        dataType: 'json',
        success: function (rs) {
        }
    });
}
