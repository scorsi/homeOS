uchar kbdmap[] = {
        0x1B, 0x1B, 0x1B, 0x1B,    /*      esc     (0x01)  */
        '1', '!', '1', '1',
        '2', '@', '2', '2',
        '3', '#', '3', '3',
        '4', '$', '4', '4',
        '5', '%', '5', '5',
        '6', '^', '6', '6',
        '7', '&', '7', '7',
        '8', '*', '8', '8',
        '9', '(', '9', '9',
        '0', ')', '0', '0',
        '-', '_', '-', '-',
        '=', '+', '=', '=',
        0x08, 0x08, 0x7F, 0x08,    /*      backspace       */
        0x09, 0x09, 0x09, 0x09,    /*      tab     */
        'q', 'Q', 'q', 'q',
        'w', 'W', 'w', 'w',
        'e', 'E', 'e', 'e',
        'r', 'R', 'r', 'r',
        't', 'T', 't', 't',
        'y', 'Y', 'y', 'y',
        'u', 'U', 'u', 'u',
        'i', 'I', 'i', 'i',
        'o', 'O', 'o', 'o',
        'p', 'P', 'p', 'p',
        '[', '{', '[', '[',
        ']', '}', ']', ']',
        0x0A, 0x0A, 0x0A, 0x0A,    /*      enter   */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      ctrl    */
        'a', 'A', 'a', 'a',
        's', 'S', 's', 's',
        'd', 'D', 'd', 'd',
        'f', 'F', 'f', 'f',
        'g', 'G', 'g', 'g',
        'h', 'H', 'h', 'h',
        'j', 'J', 'j', 'j',
        'k', 'K', 'k', 'k',
        'l', 'L', 'l', 'l',
        ';', ':', ';', ';',
        0x27, 0x22, 0x27, 0x27,    /*      '"      */
        '`', '~', '`', '`',    /*      `~      */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      Lshift  (0x2a)  */
        '\\', '|', '\\', '\\',
        'z', 'Z', 'z', 'z',
        'x', 'X', 'x', 'x',
        'c', 'C', 'c', 'c',
        'v', 'V', 'v', 'v',
        'b', 'B', 'b', 'b',
        'n', 'N', 'n', 'n',
        'm', 'M', 'm', 'm',
        0x2C, 0x3C, 0x2C, 0x2C,    /*      ,<      */
        0x2E, 0x3E, 0x2E, 0x2E,    /*      .>      */
        0x2F, 0x3F, 0x2F, 0x2F,    /*      /?      */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      Rshift  (0x36)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x37)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x38)  */
        ' ', ' ', ' ', ' ',    /*      space   */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x3a)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x3b)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x3c)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x3d)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x3e)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x3f)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x40)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x41)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x42)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x43)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x44)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x45)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x46)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x47)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x48)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x49)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x4a)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x4b)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x4c)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x4d)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x4e)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x4f)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x50)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x51)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x52)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x53)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x54)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x55)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x56)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x57)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x58)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x59)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x5a)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x5b)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x5c)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x5d)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x5e)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x5f)  */
        0xFF, 0xFF, 0xFF, 0xFF,    /*      (0x60)  */
        0xFF, 0xFF, 0xFF, 0xFF     /*      (0x61)  */
};
