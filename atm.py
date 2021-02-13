wd, bal = map(float, input().split())

if(bal > wd+0.5):
  if(wd%5 == 0):
    print("{:.2f}".format(bal-wd-0.5))
  else:
    print("{:.2f}".format(bal))
else:
  print("{:.2f}".format(bal))