static void FUN1()
{
    switch(5)
    {
    case 6:
        
        FUN2("");
        break;
    default:
    {
        char VAR1[150], VAR2[100];
        
        memset(VAR1, '', 149);
        VAR1[149] = '';
        memcpy(VAR2, VAR1, 99*sizeof(char));
        VAR2[99] = ''; 
        FUN2(VAR2);
    }
    break;
    }
}