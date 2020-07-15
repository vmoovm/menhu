<div class="wrapper-title" id="fine">
					<a href="http://888pic.com/#fine" class="current">{dede:field name='typename'/}<i></i></a><a href="http://888pic.com/new/#fine">今日上新<i></i></a>
				</div>
				<div class="content-index clearfix">
					{dede:arclist titlelen='60' row='8' channelid='17' typeid="4" }
					<div class="img-show fl">
						<div class="img">
							<a href="[field:arcurl /]" target="_blank"><img class="lazy" alt="[field:title function='html2text(@me)'/]" width="380" height="572" src="[field:picname /]"/></a>
						</div>
						<!--灵感vip-->
						<div class="img-pos">
							<a href="[field:htmlfile /]" target="_blank">
								<div class="free-download"><i></i><span>免费下载</span></div>
							</a>
							<a href="[dede:field name='phpurl'/]/stow.php?aid=[dede:field.id/]">
								<div class="collect" data-id="27625" data-status="0"><i></i>收藏</div>
							</a>
							<div class="img-opacity"></div>
							<a href="[field:arcurl /]" target="_blank">
								<div class="img-but" target="_blank">
									<p>[field:title /]</p>
								</div>
							</a>
						</div>
					</div>
					{/dede:arclist}
				</div>
				<a href="{dede:field name='typeurl'/}" class="more" page="1" type="1">加载更多</a>