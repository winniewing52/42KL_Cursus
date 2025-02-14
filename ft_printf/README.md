# ft_printf

<p align="center">
  <img src="https://github.com/ayogun/42-project-badges/blob/main/badges/ft_printfe.png" />
</p>

# Introduction
The ``ft_printf`` function takes a format string and a variable number of arguments. It processes the format string, and for each format specifier (e.g., ``%s``, ``%d``), it retrives the corresponding argument from the variable argument list and prints it according to the specified format.

The table below lists supported format specifiers:
<table>
    <thead>
        <tr>
            <th colspan=3><h3>Features</h3></th>
        </tr>
        <tr>
            <th>Format Specifier</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
	</thead>
        <tr>
            <td align="center">%c</td>
            <td>Prints a single character</td>
        </tr>
        <tr>
            <td align="center">%s</td>
            <td>Prints a string</td>
        </tr>
        <tr>
            <td align="center">%p</td>
            <td>Prints a pointer address in hexadecimal format</td>
        </tr>
        <tr>
            <td align="center">%d and &i</td>
            <td>Prints a signed decimal integer</td>
        </tr>
        <tr>
            <td align="center">%u</td>
            <td>Prints an unsiged decimal integer</td>
        </tr>
        <tr>
            <td align="center">%x</td>
            <td>Prints an unsigned hexadecimal integer (lowercase)</td>
        </tr>
        <tr>
            <td align="center">%X</td>
            <td>Prints an unsigned hexadecimal integer (uppercase)</td>
        </tr>
        <tr>
            <td align="center">%%</td>
            <td>Prints a percent sign</td>
        </tr>
    </tbody>
</table>

The table below lists the main functions used in ``ft_printf``:
<table>
    <thead>
        <tr>
            <th colspan=3><h3>Key Functions</h3></th>
        </tr>
        <tr>
            <th>Function</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
	</thead>
        <tr>
            <td align="center">ft_printf</td>
            <td>The main function that processes the format string and calls the appropriate conversion handlers</td>
        </tr>
        <tr>
            <td align="center">handle_conversions</td>
            <td>Iterates through the format string, identifies format specifiers, and delegates the printing to the appropriate functions</td>
        </tr>
        <tr>
            <td align="center">print_char</td>
            <td>Prints a single character</td>
        </tr>
        <tr>
            <td align="center">print_string</td>
            <td>Prints a string. If the string is ``NULL``, it prints ``(null)``</td>
        </tr>
        <tr>
            <td align="center">print_pointer</td>
            <td>Prints a pointer address in hexadecimal format, prefixed with ``0x``</td>
        </tr>
        <tr>
            <td align="center">print_number</td>
            <td>Prints a signed integer</td>
        </tr>
        <tr>
            <td align="center">print_unsigned</td>
            <td>Prints an unsigned integer</td>
        </tr>
        <tr>
            <td align="center">print_hex</td>
            <td>Prints an unsigned integer in hexadecimal format, with optional uppercase letters</td>
        </tr>
        <tr>
            <td align="center">print_percent</td>
            <td>Prints a percent sign</td>
        </tr>
    </tbody>
</table>
