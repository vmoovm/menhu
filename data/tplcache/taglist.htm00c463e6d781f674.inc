<?php
$z[0]=Array("field","",256,275);
$z[0][4]['name']="title";
$z[1]=Array("global","",276,302);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",345,374);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",414,472);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("global","",525,557);
$z[4][4]['name']="cfg_templets_skin";
$z[5]=Array("global","",627,659);
$z[5][4]['name']="cfg_templets_skin";
$z[6]=Array("include","",719,754);
$z[6][4]['filename']="head.htm";
$z[7]=Array("global","",905,930);
$z[7][4]['name']="cfg_cmsurl";
$z[8]=Array("field","",987,1007);
$z[8][4]['name']="title";
$z[9]=Array("list","\r\n					<div class=\"img-show fl\">\r\n						<div class=\"img\">\r\n							[field:array runphp='yes']@me = (empty(@me['litpic']) ? \"\" : \"<a href='{@me['arcurl']}' class='preview'><img src='{@me['litpic']}'/></a>\"); [/field:array]\r\n							<!--<a href=\"[field:arcurl /]\" target=\"_blank\"><img class=\"lazy\" alt=\"[field:title function='html2text(@me)'/]\" width=\"380\" height=\"572\" src=\"[field:picname /]\"/></a>-->\r\n						</div>\r\n						<!--灵感vip-->\r\n						<div class=\"img-pos\">\r\n							<a href=\"http://888pic.com/?m=download&id=27625\" target=\"_blank\">\r\n								<div class=\"free-download\"><i></i><span>免费下载</span></div>\r\n							</a>\r\n							<a href=\"javascript:;\">\r\n								<div class=\"collect\" data-id=\"27625\" data-status=\"0\"><i></i>收藏</div>\r\n							</a>\r\n							<div class=\"img-opacity\"></div>\r\n							<a href=\"[field:arcurl /]\" target=\"_blank\">\r\n								<div class=\"img-but\" target=\"_blank\">\r\n									<p>[field:title /]</p>\r\n								</div>\r\n							</a>\r\n						</div>\r\n					</div>\r\n					",1087,2132);
$z[9][4]['orderby']="sortrank";
$z[9][4]['pagesize']="10";
$z[10]=Array("pagelist","",2229,2300);
$z[10][4]['listitem']="info,index,end,pre,next,pageno";
$z[10][4]['listsize']="5";
$z[11]=Array("include","",2372,2409);
$z[11][4]['filename']="footer.htm";

?>