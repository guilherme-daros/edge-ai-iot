import matplotlib.pyplot as plt
import numpy as np
import pandas as pd


file = pd.read_csv("base10.csv", skiprows=6)
print(np.mean(file["Curr avg 1"][10000:]))
plt.figure()
plt.plot(file["Curr avg 1"][10000:])
plt.show()