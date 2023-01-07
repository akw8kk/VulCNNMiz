import pickle
import matplotlib.pyplot as plt


f = open('/Users/anniewatson/Downloads/VulCNN-Main/TestData/ForwardSlice/Vul/9-pdg.pkl', 'rb')
data = pickle.load(f)

#plt.imshow(data[0])
plt.imshow(data[1])
#plt.imshow(data[2])
plt.show()