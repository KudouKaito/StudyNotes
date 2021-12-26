# equations.jl
# 二分法求根，f为函数，err为误差
# 要求f(a)*f(b)<0
function Dichotomy(f,a,b,err)
    c = (a+b)/2
    val = f(c)
    #如果f(c)和f(a)异号，则将c赋值给b，否则将c赋值给a
    val*f(a)<0 ? b=c : a=c
    #如果大于误差，则继续二分，否则输出c
    return abs(val)>err ? Dichotomy(f,a,b,err) : c
end

