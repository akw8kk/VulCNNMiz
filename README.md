
## Source Code

#### Step 1 
Generate the forward slice dictionaries. This will create a folder called “dictionaries” with a .txt file for each function input and the destructibility metric for each line

```
python3 forwardSliceCreator.py
```
#### Step 2: Generate images from the pdgs
Generate Images from the pdgs with ImageGeneration.py, this step will output a .pkl file for each .dot file.
```
python3 ImageGeneration.py -i ./pdgs/Vul -o ./data/sard/outputs/Vul -m ./model.bin
python3 ImageGeneration.py -i ./pdgs/No-Vul -o ./data/sard/outputs/No-Vul  -m ./model.bin
```
#### Step 3: Integrate the data and divide the training and testing datasets
Integrate the data and divide the training and testing datasets with generate_train_test_data.py, this step will output a train.pkl and a test.pkl file.
```
# n denotes the number of kfold, i.e., n=10 then the training set and test set are divided according to 9:1 and 10 sets of experiments will be performed
python3 generate_train_test_data.py -i ./data/sard/outputs/ -o ./data/sard/pkl/ -n 5
```
#### Step 4: Train with CNN
```
python VulCNN.py -i ./data/sard/pkl
```
