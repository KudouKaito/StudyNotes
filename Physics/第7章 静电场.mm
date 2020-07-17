<map version="freeplane 1.8.0">
<!--To view this file, download free mind mapping software Freeplane from http://freeplane.sourceforge.net -->
<node TEXT="第7章 静电场" FOLDED="false" ID="ID_444648297" CREATED="1594801069451" MODIFIED="1594801430456" STYLE="oval">
<font SIZE="18"/>
<hook NAME="MapStyle">
    <properties edgeColorConfiguration="#808080ff,#ff0000ff,#0000ffff,#00ff00ff,#ff00ffff,#00ffffff,#7c0000ff,#00007cff,#007c00ff,#7c007cff,#007c7cff,#7c7c00ff" fit_to_viewport="false"/>

<map_styles>
<stylenode LOCALIZED_TEXT="styles.root_node" STYLE="oval" UNIFORM_SHAPE="true" VGAP_QUANTITY="24.0 pt">
<font SIZE="24"/>
<stylenode LOCALIZED_TEXT="styles.predefined" POSITION="right" STYLE="bubble">
<stylenode LOCALIZED_TEXT="default" ICON_SIZE="12.0 pt" COLOR="#000000" STYLE="fork">
<font NAME="SansSerif" SIZE="10" BOLD="false" ITALIC="false"/>
</stylenode>
<stylenode LOCALIZED_TEXT="defaultstyle.details"/>
<stylenode LOCALIZED_TEXT="defaultstyle.attributes">
<font SIZE="9"/>
</stylenode>
<stylenode LOCALIZED_TEXT="defaultstyle.note" COLOR="#000000" BACKGROUND_COLOR="#ffffff" TEXT_ALIGN="LEFT"/>
<stylenode LOCALIZED_TEXT="defaultstyle.floating">
<edge STYLE="hide_edge"/>
<cloud COLOR="#f0f0f0" SHAPE="ROUND_RECT"/>
</stylenode>
</stylenode>
<stylenode LOCALIZED_TEXT="styles.user-defined" POSITION="right" STYLE="bubble">
<stylenode LOCALIZED_TEXT="styles.topic" COLOR="#18898b" STYLE="fork">
<font NAME="Liberation Sans" SIZE="10" BOLD="true"/>
</stylenode>
<stylenode LOCALIZED_TEXT="styles.subtopic" COLOR="#cc3300" STYLE="fork">
<font NAME="Liberation Sans" SIZE="10" BOLD="true"/>
</stylenode>
<stylenode LOCALIZED_TEXT="styles.subsubtopic" COLOR="#669900">
<font NAME="Liberation Sans" SIZE="10" BOLD="true"/>
</stylenode>
<stylenode LOCALIZED_TEXT="styles.important">
<icon BUILTIN="yes"/>
</stylenode>
</stylenode>
<stylenode LOCALIZED_TEXT="styles.AutomaticLayout" POSITION="right" STYLE="bubble">
<stylenode LOCALIZED_TEXT="AutomaticLayout.level.root" COLOR="#000000" STYLE="oval" SHAPE_HORIZONTAL_MARGIN="10.0 pt" SHAPE_VERTICAL_MARGIN="10.0 pt">
<font SIZE="18"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,1" COLOR="#0033ff">
<font SIZE="16"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,2" COLOR="#00b439">
<font SIZE="14"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,3" COLOR="#990000">
<font SIZE="12"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,4" COLOR="#111111">
<font SIZE="10"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,5"/>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,6"/>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,7"/>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,8"/>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,9"/>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,10"/>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,11"/>
</stylenode>
</stylenode>
</map_styles>
</hook>
<hook NAME="AutomaticEdgeColor" COUNTER="10" RULE="ON_BRANCH_CREATION"/>
<node TEXT="描述静电场的基本物理量" POSITION="right" ID="ID_1082349579" CREATED="1594801504681" MODIFIED="1594801594760">
<edge COLOR="#7c0000"/>
<node TEXT="库仑定律" ID="ID_1664300354" CREATED="1594801617254" MODIFIED="1594801641607">
<node TEXT="\latex $\vec{F}=\frac{q_1q_2}{4\pi\varepsilon_0r^2}\vec{r}_0$" ID="ID_803392224" CREATED="1594801809115" MODIFIED="1594805113329">
<node TEXT="\latex \vec{r_0} 是由施力方向指向受力电荷的失径方向" ID="ID_774715482" CREATED="1594802619658" MODIFIED="1594802725550"/>
</node>
</node>
<node TEXT="电场强度" ID="ID_1615819554" CREATED="1594802730288" MODIFIED="1594802739838">
<node TEXT="\latex \vec{E}=\frac{\vec{F}}{q}" ID="ID_829034160" CREATED="1594802740084" MODIFIED="1594802786515">
<node TEXT="点电荷" ID="ID_1586273376" CREATED="1594802823686" MODIFIED="1594802831359">
<node TEXT="\latex $\vec{E}=\frac{q}{4\pi\varepsilon_0r^2}\vec{r}_0$" ID="ID_1367684097" CREATED="1594802833149" MODIFIED="1594805094002"/>
</node>
<node TEXT="点电荷系" ID="ID_1672939107" CREATED="1594802823686" MODIFIED="1594802933767">
<node TEXT="\latex $\vec{E}=\sum\limits_{i=1}^{n}{E_i}=\sum\limits_{i=1}^{n}\frac{q_i}{4\pi\varepsilon_0r_i^2}\vec{r}_{i0}$" ID="ID_120595416" CREATED="1594802833149" MODIFIED="1594985504433"/>
</node>
<node TEXT="电荷连续分布的带电体" ID="ID_907735232" CREATED="1594803929165" MODIFIED="1594803982781">
<node TEXT="\latex $d\vec{E}={\frac{dq}{4\pi\varepsilon_0r^2}}\vec{r}_0$" ID="ID_251185639" CREATED="1594804049850" MODIFIED="1594805070062">
<node TEXT="体积" ID="ID_827354604" CREATED="1594804419071" MODIFIED="1594804442580">
<node TEXT="\latex $dq=\rho dV$" ID="ID_184088639" CREATED="1594804483227" MODIFIED="1594804540064"/>
<node TEXT="体密度" ID="ID_433651213" CREATED="1594804549498" MODIFIED="1594804565552">
<node TEXT="\latex $\rho=\frac{q}{V}$(若均匀)" ID="ID_1491486199" CREATED="1594804583382" MODIFIED="1594804648601"/>
</node>
</node>
<node TEXT="面" ID="ID_1025554955" CREATED="1594804419071" MODIFIED="1594804673237">
<node TEXT="\latex $dq=\sigma dS$" ID="ID_110627620" CREATED="1594804483227" MODIFIED="1594804717296"/>
<node TEXT="体密度" ID="ID_1711483608" CREATED="1594804549498" MODIFIED="1594804565552">
<node TEXT="\latex $\sigma=\frac{q}{S}$(若均匀)" ID="ID_1200712438" CREATED="1594804583382" MODIFIED="1594804722716"/>
</node>
</node>
<node TEXT="线" ID="ID_1129363807" CREATED="1594804419071" MODIFIED="1594804677028">
<node TEXT="\latex $dq=\lambda dl$" ID="ID_241871884" CREATED="1594804483227" MODIFIED="1594807112534"/>
<node TEXT="体密度" ID="ID_443982679" CREATED="1594804549498" MODIFIED="1594804565552">
<node TEXT="\latex $\lambda=\frac{q}{L}$(若均匀)" ID="ID_1639775704" CREATED="1594804583382" MODIFIED="1594804744998"/>
</node>
</node>
</node>
</node>
<node TEXT="真空无限长的均匀带电直导线" ID="ID_651287236" CREATED="1594804750147" MODIFIED="1594804805675">
<node TEXT="\latex $\vec{E}=\frac{\lambda}{2\pi\varepsilon_0r}$" ID="ID_1719676116" CREATED="1594804907811" MODIFIED="1594985736772">
<node TEXT="用高斯定理求出" ID="ID_223692929" CREATED="1594811274411" MODIFIED="1594813432318"/>
</node>
<node TEXT="方向垂直于直线的平面且延径向方向向外" ID="ID_1579226712" CREATED="1594805013797" MODIFIED="1594805050401"/>
</node>
<node TEXT="无限大均匀带电平面" ID="ID_360262973" CREATED="1594813460143" MODIFIED="1594813552537">
<node TEXT="\latex $E=\frac{\sigma}{2q_0}$" ID="ID_1165580177" CREATED="1594804907811" MODIFIED="1594813607489">
<node TEXT="用高斯定理求出" ID="ID_1978391199" CREATED="1594811274411" MODIFIED="1594813432318"/>
</node>
<node TEXT="方向垂直于平面" ID="ID_500966128" CREATED="1594813621566" MODIFIED="1594813627381"/>
</node>
<node TEXT="均匀带电球体" ID="ID_1350170131" CREATED="1594813654678" MODIFIED="1594813663962">
<node TEXT="球内" ID="ID_1602743014" CREATED="1594813664190" MODIFIED="1594813671217">
<node TEXT="\latex $\vec{E}=\frac{q\vec{r}}{4\pi\varepsilon_0R^3}$" ID="ID_616911924" CREATED="1594813688456" MODIFIED="1594985761918"/>
</node>
<node TEXT="球外" ID="ID_1740309120" CREATED="1594813671898" MODIFIED="1594813679240">
<node TEXT="\latex $\vec{E}=\frac{q}{4\pi\varepsilon_0R^2}\vec{r}_0$" ID="ID_790103135" CREATED="1594813688456" MODIFIED="1594985769240"/>
</node>
</node>
<node TEXT="均匀带电球面" ID="ID_1614798397" CREATED="1594813654678" MODIFIED="1594814186954">
<node TEXT="球内" ID="ID_578400032" CREATED="1594813664190" MODIFIED="1594813671217">
<node TEXT="\latex $\vec{E}=\vec{0}$" ID="ID_1116153056" CREATED="1594813688456" MODIFIED="1594985778297"/>
</node>
<node TEXT="球外" ID="ID_606360500" CREATED="1594813671898" MODIFIED="1594813679240">
<node TEXT="\latex $\vec{E}=\frac{q}{4\pi\varepsilon_0R^2}\vec{r}_0$" ID="ID_1049536790" CREATED="1594813688456" MODIFIED="1594985785679"/>
</node>
</node>
</node>
</node>
<node TEXT="电场力所做的功" ID="ID_1692560905" CREATED="1594814248730" MODIFIED="1594814259533">
<node TEXT="\latex $W=\int_a^b{q\vec{E}{\cdot}d\vec{l}}=q(U_a-U_b)$" ID="ID_1611903251" CREATED="1594814405204" MODIFIED="1594814629807"/>
</node>
<node TEXT="电势" ID="ID_14583809" CREATED="1594814691325" MODIFIED="1594814696066">
<node TEXT="\latex $U=\int_a^\infty{\vec{E}{\cdot}d\vec{l}}$(设$U_\infty=0$)" ID="ID_712806324" CREATED="1594814696146" MODIFIED="1594993549446">
<node TEXT="点电荷" ID="ID_1700453909" CREATED="1594802823686" MODIFIED="1594802831359">
<node TEXT="\latex $U=\frac{q}{4\pi\varepsilon_0r}$" ID="ID_647689870" CREATED="1594802833149" MODIFIED="1594985443858"/>
</node>
<node TEXT="点电荷系" ID="ID_833129266" CREATED="1594802823686" MODIFIED="1594802933767">
<node TEXT="\latex $U=\sum\limits_{i=1}^{n}\frac{q_i}{4\pi\varepsilon_0r_i}$" ID="ID_991238467" CREATED="1594802833149" MODIFIED="1594985519035"/>
</node>
<node TEXT="电荷连续分布的带电体的电势" ID="ID_1293445137" CREATED="1594803929165" MODIFIED="1594985545784">
<node TEXT="\latex $U=\int_UdU=\int_q{\frac{dq}{4\pi\varepsilon_0r}}$" ID="ID_1202938939" CREATED="1594804049850" MODIFIED="1594985665130"/>
</node>
<node TEXT="均匀带电球面的电势" ID="ID_564637365" CREATED="1594813654678" MODIFIED="1594985697596">
<node TEXT="球内以及球上" ID="ID_507453001" CREATED="1594813664190" MODIFIED="1594985713674">
<node TEXT="\latex $U=\frac{q}{4\pi\varepsilon_0R}$" ID="ID_934327627" CREATED="1594813688456" MODIFIED="1594985848396"/>
</node>
<node TEXT="球外" ID="ID_1119096931" CREATED="1594813671898" MODIFIED="1594813679240">
<node TEXT="\latex $U=\frac{q}{4\pi\varepsilon_0r}$" ID="ID_302517637" CREATED="1594813688456" MODIFIED="1594985859641"/>
</node>
</node>
</node>
</node>
</node>
<node TEXT="静电场的基本性质" POSITION="right" ID="ID_1008240126" CREATED="1594815087535" MODIFIED="1594815096875">
<edge COLOR="#00007c"/>
<node TEXT="真空中的高斯定理" ID="ID_891887579" CREATED="1594815099722" MODIFIED="1594815109885">
<node TEXT="\latex $\oint\limits_S{\vec{E}{\cdot}d\vec{S}}=\frac{\sum{q_i}}{\varepsilon_0}$" ID="ID_1702179107" CREATED="1594815110495" MODIFIED="1594985259561"/>
</node>
<node TEXT="介质中的高斯定理" ID="ID_654322346" CREATED="1594985144750" MODIFIED="1594985154093">
<node TEXT="\latex $\oint\limits_S{\vec{D}{\cdot}d\vec{S}}=\sum{q_i}$" ID="ID_1071759392" CREATED="1594815110495" MODIFIED="1594985191184">
<node TEXT="\latex $\vec{D}=\varepsilon\vec{E}=\varepsilon_0\varepsilon_r\vec{E}$" ID="ID_1884644016" CREATED="1594985318850" MODIFIED="1594993370016"/>
</node>
</node>
<node TEXT="静电场的环流定理" ID="ID_1408499041" CREATED="1594985144750" MODIFIED="1594985294194">
<node TEXT="\latex $\oint\limits_l{\vec{E}{\cdot}d\vec{l}}=0$" ID="ID_1025358609" CREATED="1594815110495" MODIFIED="1594985391808"/>
</node>
</node>
<node TEXT="处于静电场中的导体" POSITION="right" ID="ID_1854378868" CREATED="1594985881026" MODIFIED="1594985894582">
<edge COLOR="#007c00"/>
<node TEXT="静电平衡条件" ID="ID_332500301" CREATED="1594985897433" MODIFIED="1594985910233">
<node TEXT="导体内部的电场强度为零在" ID="ID_1975201305" CREATED="1594985910417" MODIFIED="1594987965560"/>
<node ID="ID_770340922" CREATED="1594987966551" MODIFIED="1594987966551"><richcontent TYPE="NODE">

<html>
  <head>
    
  </head>
  <body>
    <p>
      导体表面附近电场强度延表面的法线方向
    </p>
  </body>
</html>

</richcontent>
</node>
</node>
<node TEXT="电荷分布" ID="ID_59105129" CREATED="1594987981543" MODIFIED="1594987990163">
<node TEXT="电荷只分布在导体表面" ID="ID_598366607" CREATED="1594987992890" MODIFIED="1594988010000"/>
<node TEXT="对空腔导体, 腔内无带电体时, 电荷只分布在空腔导体的外表面；空腔内有带电体q时, 导体内表面有感应电荷-q, 外表面有感应电荷q" ID="ID_75821799" CREATED="1594988028460" MODIFIED="1594988152337"/>
<node TEXT="孤立导体表面电荷面密度与表面区率有关: 曲率大 ,电荷面密度大; 曲率小, 电荷面密度小" ID="ID_1894471082" CREATED="1594988161712" MODIFIED="1594988259107"/>
</node>
</node>
<node TEXT="电容" POSITION="right" ID="ID_23435786" CREATED="1594988361264" MODIFIED="1594988369046">
<edge COLOR="#7c007c"/>
<node TEXT="孤立导体" ID="ID_120766125" CREATED="1594988385625" MODIFIED="1594988391536">
<node TEXT="\latex $C=\frac{q}{U}$" ID="ID_1788196563" CREATED="1594988391647" MODIFIED="1594988587478"/>
</node>
<node TEXT="电容器" ID="ID_878689741" CREATED="1594988421337" MODIFIED="1594988424760">
<node TEXT="\latex $C=\frac{q}{U_{AB}}$" ID="ID_592886161" CREATED="1594988431986" MODIFIED="1594988591055">
<node TEXT="平面板" ID="ID_1309177175" CREATED="1594988478381" MODIFIED="1594988483256">
<node TEXT="\latex $C=\frac{\varepsilon_0S}{d}$(真空)" ID="ID_360000678" CREATED="1594988485780" MODIFIED="1594989267064"/>
</node>
<node TEXT="圆柱形" ID="ID_1795812118" CREATED="1594989273555" MODIFIED="1594989288155">
<node TEXT="\latex $C=\frac{2\pi\varepsilon_0l}{\ln{(R_B/R_A)}}$" ID="ID_528119023" CREATED="1594989288531" MODIFIED="1594989380783"/>
</node>
<node TEXT="球形" ID="ID_88330804" CREATED="1594989273555" MODIFIED="1594989395003">
<node TEXT="\latex $C=\frac{4\pi\varepsilon_0R_AR_B}{R_B-R_A}$" ID="ID_622028541" CREATED="1594989288531" MODIFIED="1594989428842"/>
</node>
</node>
</node>
<node TEXT="串联" ID="ID_758183478" CREATED="1594989512076" MODIFIED="1594989515982">
<node TEXT="\latex $\frac{1}{C}=\sum{\frac{1}{C_i}}$" ID="ID_1537451335" CREATED="1594989516082" MODIFIED="1594989559129"/>
</node>
<node TEXT="并联" ID="ID_1021468781" CREATED="1594989512076" MODIFIED="1594989567373">
<node TEXT="\latex $C=\sum{C_i}$" ID="ID_422212615" CREATED="1594989516082" MODIFIED="1594989580272"/>
</node>
</node>
<node TEXT="静电场的能量" POSITION="right" ID="ID_1340629911" CREATED="1594989704693" MODIFIED="1594992188825">
<edge COLOR="#007c7c"/>
<node TEXT="充电电容器的能量" ID="ID_285443388" CREATED="1594992189435" MODIFIED="1594992210634">
<node TEXT="\latex $W_c=\frac{1}{2}CU^2$" ID="ID_1693922203" CREATED="1594992211248" MODIFIED="1594992272888">
<node TEXT="\latex $\int_0^Q{Udq}$" ID="ID_513138942" CREATED="1594992435320" MODIFIED="1594992811799"/>
</node>
</node>
<node TEXT="电场能量密度" ID="ID_694146950" CREATED="1594992362014" MODIFIED="1594992379318">
<node TEXT="\latex $w_e=\frac{1}{2}\vec{D}{\cdot}\vec{E}$" ID="ID_1092308989" CREATED="1594992953999" MODIFIED="1594993019245"/>
</node>
<node TEXT="电场的能量" ID="ID_439707540" CREATED="1594993380720" MODIFIED="1594993390622">
<node TEXT="\latex $W_c=\int_V{w_cdV}=\int_V{\frac{1}{2}\epsilon E^2dV}$" ID="ID_349629262" CREATED="1594993391335" MODIFIED="1594993460523"/>
</node>
</node>
</node>
</map>
