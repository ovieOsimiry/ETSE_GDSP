from __future__ import print_function
import random

#THis is specifies how many bits out of 18 bits will be used to reperesent the
#real numbers that will be generated
FractionalPart = 17

#THis is simply the precision which is calculated from the bitwidth of the decimal values
Precision = 2**FractionalPart

#bit width is fixed at 18bits and this gives us a rounding of 6 digits so we use 6 
#here to round float values to 6 decimal places
roundingError = 6

#This number is used to specify how many values should be generated. please set 
#this number to an even number because it represent both parameter and A and B
Number_of_values_to_generate = 20 

f1 = open('C:\FPGA\Internship Jobs\Codes\ETSE_GDSP\TestingFiles\Task2_Test_value_AB.txt', 'w')

int_real1 = 0
real1 = 0.0

for x in range(0,Number_of_values_to_generate):    
    int_real1 = round(random.uniform(-1,1) * Precision) #rescale to the bitwdith of the Fractional part   
    real1 = round((int_real1/Precision),roundingError) #Round the value to introduce the rounding error
    if x < Number_of_values_to_generate-1:    
        f1.write(str(real1) + "\n")
    else:
        f1.write(str(real1))
        
f1.close()


# This section is for pre-calculating the product of A and B, however the after rounding the final result
# has a considerable deviation from what it should be at 18 bits. If you want you can uncomment it to perform
# pre-calculation otherwise leave it. Although the VHDL test bench already uses the values from the generated file from above
#"Task2_Test_value_AB.txt" for pre-calculation of the Product.

#cnt = 0
#real2 = 0.0
#
#with open('C:\FPGA\Internship Jobs\Codes\ETSE_GDSP\TestingFiles\Task2_Test_value_AB.txt') as f:
#    List_of_Real_numbers = [float(x) for x in f.read().split()]
#    f.close()
#    #print(List_of_Real_numbers)
#    
#f = open('C:\FPGA\Internship Jobs\Codes\ETSE_GDSP\TestingFiles\Task2_Test_value_AB_result.txt', 'w')
#for i in range(0, len(List_of_Real_numbers)/2):
#   A = round(float(round(float(List_of_Real_numbers[i + cnt])*Precision)/Precision),roundingError)
#   print((str("A =") + " " + str(A)))
#   cnt = cnt + 1
#   B = round(float(round(float(List_of_Real_numbers[i + cnt])*Precision)/Precision),roundingError)
#   print((str("B =") + " " + str(B)))  
#   
#   #real2 = round(round(real2,roundingError) + (A * B),roundingError)
#   real2 = round(real2 + (A * B),roundingError)
#   #f.write((str(real2) + " = " + str(A) + " * " + str(B) + "\n"))
#   f.write(str(real2) + "\n")
#f.close()


###############The algorithms below are just experiment you can ingnore them################################

#f1 = open('C:\FPGA\Internship Jobs\Codes\ETSE_GDSP\TestingFiles\Task2_Test_value_P.txt', 'r')
#file_contents = f1.read()
#f1.close()
#print(file_contents)

#f1 = open('C:\FPGA\Internship Jobs\Codes\ETSE_GDSP\TestingFiles\Task2_Test_value_P.txt', 'w')
#f2 = open('C:\FPGA\Internship Jobs\Codes\ETSE_GDSP\TestingFiles\Task2_Test_value_G.txt', 'w')
#f3 = open('C:\FPGA\Internship Jobs\Codes\ETSE_GDSP\TestingFiles\Task2_Test_value_PG_result.txt', 'w')
#real3 = 0.0
#for x in range(0,1000):
#    real1 = random.uniform(-1,1)
#    real2 = random.uniform(-1,1)
#    real3 = real3 + (real1 * real2)
#    f1.write(str(real1) + "\n")
#    f2.write(str(real2) + "\n")
#    f3.write(str(real3) + "\n")    
#f1.close()
#f2.close()
#f3.close()
#

#f1 = open('C:\FPGA\Internship Jobs\Codes\ETSE_GDSP\TestingFiles\Task2_Test_value_P.txt', 'w')
#f2 = open('C:\FPGA\Internship Jobs\Codes\ETSE_GDSP\TestingFiles\Task2_Test_value_G.txt', 'w')
#f3 = open('C:\FPGA\Internship Jobs\Codes\ETSE_GDSP\TestingFiles\Task2_Test_value_PG_result.txt', 'w')
#real3 = 0.0
#int_real1 = 0
#int_real2 = 0
#real1 = 0.0
#real2 = 0.0
#for x in range(0,5):
#    int_real1 = round(random.uniform(-1,1) * 2**17)
#    int_real2 = round(random.uniform(-1,1) * 2**17)
#    
#    real1 = round((int_real1/2**17),6)
#    real2 = round((int_real2/2**17),6)
#    
#    real3 = round(real3 + (real1 * real2),6)
#    f1.write(str(real1) + "\n")
#    f2.write(str(real2) + "\n")
#    f3.write(str(real3) + "\n")    
#f1.close()
#f2.close()
#f3.close()
