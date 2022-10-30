from calendar import month_name


for i in range(5):
    s = int(input())
    dtk = s%60
    mnt = (s/60) % 60
    jam = (s/3600) %24
    h = s/86400

    if s<=3600 or s>3600 and s<=86400:
       print("%.2d:%.2d:%.2d\n" %(jam,mnt,dtk))
    elif s>86400:
        print("%d hari %.2d:%.2d:%.2d" %(h,jam,mnt,dtk))