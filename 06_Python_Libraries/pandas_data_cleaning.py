import pandas as pd

data = {'Name': ['Ali', 'Sara', None], 'Marks': [90, None, 88]}
df = pd.DataFrame(data)

print("Original:\n", df)
df_clean = df.dropna()
print("After Dropna:\n", df_clean)

df_fill = df.fillna({'Name': 'Unknown', 'Marks': df['Marks'].mean()})
print("After Fillna:\n", df_fill)
