import csv

# Define your test conditions and parameter limits here
input_voltage_min = 4.75  # Minimum input voltage in volts
input_voltage_max = 5.25  # Maximum input voltage in volts
nominal_output_voltage = 5.0  # Nominal output voltage in volts
load_min = 0.1  # Minimum load in amps
load_max = 1.0  # Maximum load in amps
line_voltage_min = 4.5  # Minimum line voltage in volts
line_voltage_max = 5.5  # Maximum line voltage in volts

# Initialize a CSV file for logging data
csv_filename = "voltage_regulator_test_results.csv"

# Function to log test results
def log_test_result(test_name, parameter, result):
    with open(csv_filename, mode='a', newline='') as csv_file:
        csv_writer = csv.writer(csv_file)
        csv_writer.writerow([test_name, parameter, result])

# Test function for input voltage test
def input_voltage_test():
    # Simulate the input voltage within the specified range
    simulated_voltage = (input_voltage_min + input_voltage_max) / 2
    
    # Check if the simulated voltage is within the specified limits
    if input_voltage_min <= simulated_voltage <= input_voltage_max:
        result = "Pass"
    else:
        result = "Fail"
    
    # Log the result
    log_test_result("Input Voltage Test", "Simulated Voltage", f"{simulated_voltage} V ({result})")

# Test function for output voltage test
def output_voltage_test():
    # Simulate the output voltage of the regulator
    simulated_voltage = nominal_output_voltage
    
    # Check if the simulated voltage is equal to the nominal voltage
    if simulated_voltage == nominal_output_voltage:
        result = "Pass"
    else:
        result = "Fail"
    
    # Log the result
    log_test_result("Output Voltage Test", "Simulated Voltage", f"{simulated_voltage} V ({result})")

# Test function for load regulation test
def load_regulation_test():
    # Simulate the regulator's response to load changes
    simulated_output_voltages = []
    for load in [load_min, load_max]:
        # Simulate the output voltage for each load condition
        simulated_voltage = nominal_output_voltage - 0.01 * (load - 0.1)  # Example load regulation
        simulated_output_voltages.append(simulated_voltage)
    
    # Check if the simulated voltages are within acceptable limits
    result = "Pass" if all(nominal_output_voltage - 0.1 <= v <= nominal_output_voltage + 0.1 for v in simulated_output_voltages) else "Fail"
    
    # Log the result
    log_test_result("Load Regulation Test", "Simulated Voltages", f"{', '.join([str(v) for v in simulated_output_voltages])} ({result})")

# Test function for line regulation test
def line_regulation_test():
    # Simulate the regulator's response to line voltage changes
    simulated_output_voltages = []
    for line_voltage in [line_voltage_min, line_voltage_max]:
        # Simulate the output voltage for each line voltage condition
        simulated_voltage = nominal_output_voltage - 0.02 * (line_voltage - 4.5)  # Example line regulation
        simulated_output_voltages.append(simulated_voltage)
    
    # Check if the simulated voltages are within acceptable limits
    result = "Pass" if all(nominal_output_voltage - 0.1 <= v <= nominal_output_voltage + 0.1 for v in simulated_output_voltages) else "Fail"
    
    # Log the result
    log_test_result("Line Regulation Test", "Simulated Voltages", f"{', '.join([str(v) for v in simulated_output_voltages])} ({result})")

# Perform tests and log data
with open(csv_filename, mode='w', newline='') as csv_file:
    csv_writer = csv.writer(csv_file)
    
    # Write headers to the CSV file
    csv_writer.writerow(["Test Name", "Parameter", "Result"])
    
    # Perform and log each test
    input_voltage_test()
    output_voltage_test()
    load_regulation_test()
    line_regulation_test()
    
    # Close the CSV file
    csv_file.close()
