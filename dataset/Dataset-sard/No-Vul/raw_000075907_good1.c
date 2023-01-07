static void FUN1()
{
    if(VAR1)
    {
        
        FUN2("");
    }
    else
    {
        {
            char VAR2[150], VAR3[100];
            
            memset(VAR2, '', 149);
            VAR2[149] = '';
            memcpy(VAR3, VAR2, 99*sizeof(char));
            VAR3[99] = ''; 
            FUN2(VAR3);
        }
    }
}