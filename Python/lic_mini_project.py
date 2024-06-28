import numpy as np
import matplotlib.pyplot as plt 
# Generate a sine wave signal fs = 1000 # Sampling 
frequency t = np.linspace(0, 1, fs, endpoint=False) # 
Time vector signal_freq = 5 # Frequency of the sine 
wave signal signal = np.sin(2 * np.pi * signal_freq * t) 
# ADC: Quantize the signal with different resolutions 
resolutions = [1, 2, 3, 5, 10, 15] # Number of bits for ADC 
# Plot the input, quantized, and reconstructed signals for each resolution for resolution in 
resolutions: quantization_levels = 2**resolution quantized_signal = np.round(signal * 
(quantization_levels - 1)) / (quantization_levels - 1) reconstructed_signal = 
quantized_signal 
 plt.figure(figsize=(8, 6)) 
 plt.subplot(2, 1, 1) 
plt.plot(t, signal) 
plt.xlabel('Time') 
plt.ylabel('Amplitude') 
plt.title('Input Signal') 
plt.subplot(2, 1, 2) plt.plot(t, 
reconstructed_signal) 
plt.xlabel('Time') 
plt.ylabel('Amplitude') 
plt.title(f'Reconstructed Signal (Resolution: {resolution} bits)') 
 plt.tight_layout() 
plt.show() 
