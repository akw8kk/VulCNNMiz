import os,glob

def rreplace(s, old, new, occurrence):
     li = s.rsplit(old, occurrence)
     return new.join(li)
        
folder_path = '/Users/anniewatson/Downloads/VulCNN-main/testers/pdgs/NoVul'
for filename in glob.glob(os.path.join(folder_path, '*.dot')):
  with open(filename, 'r') as f:
    print(filename)
    text = f.readlines()
    text3 = ""
    for line in text:
        splitter = line.split()
     
        if len(splitter) > 1:
            print(len(splitter))
            if ">" in splitter[1]:
                text3 = text3 + '\n' + line
            else:
                text2 = line.replace('<','\"',1)
                new = "\""
                text2 = new.join(text2.rsplit(">", 1))
                text3 = text3+'\n' + text2
        else:
            text3 = text3 + '\n' + "}"

    #print(text3)
    f.close()
    with open(filename, 'w') as f:
        f.write(text3)
        f.close()


def rreplace(s, old, new, occurrence):
     li = s.rsplit(old, occurrence)
     return new.join(li)
        