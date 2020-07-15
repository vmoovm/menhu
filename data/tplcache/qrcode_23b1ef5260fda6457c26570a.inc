<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
	<head>
		<title>扫描二维码</title>
		<meta http-equiv="Content-Type" content="text/html; charset=<?php echo $GLOBALS['cfg_soft_lang']; ?>" />
		<meta name="generator" content="DedeCMS V5.6" />
		<meta name="author" content="desdev.cn" />
		<style type="text/css">
			body{
				margin: 0;
			}
			.dede_weixin_popup {
			  
			  background: #fff;
			  font-size: 12px;
			}
			.dede_weixin_popup .dede_weixin_popup_foot {
			 text-align: center;
			  font-size: 12px;
			  line-height: 22px;
			  color: #666;
			}
			.dede_weixin_popup_main { text-align: center;}
		</style>
	</head>
	<body>
		<div id="dede_weixin_qrcode_dialog" class="dede_weixin_popup">
			<div id="dede_weixin_qrcode_dialog_qr" class="dede_weixin_popup_main">
				<a href="http://2v.dedecms.com/" target="_blank">
					<img src="<?php echo $GLOBALS['cfg_plus_dir']; ?>/qrcode.php?action=get_qrcode&type=<?php echo $GLOBALS['_vars']['type']; ?>&id=<?php echo $GLOBALS['_vars']['id']; ?>" width="" height="" border="0" alt="">
				</a>
			</div>
			<div class="dede_weixin_popup_foot">
				将网页分享至朋友圈<br />
				微信扫一扫</div>
		</div>
	</body>

</html>