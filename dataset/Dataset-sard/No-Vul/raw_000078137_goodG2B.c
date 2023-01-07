static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    while(1)
    {
        {
            wchar_t * VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
            wmemset(VAR2, VAR3'', 100-1);
            VAR2[100-1] = VAR3'';
            
            VAR1 = VAR2;
        }
        break;
    }
    {
        wchar_t VAR4[100];
        wmemset(VAR4, VAR3'', 100-1); 
        VAR4[100-1] = VAR3''; 
        
        memmove(VAR4, VAR1, 100*sizeof(wchar_t));
        
        VAR4[100-1] = VAR3'';
        FUN2(VAR4);
        
    }
}