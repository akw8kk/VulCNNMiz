static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    if(VAR2)
    {
        
        FUN2("");
    }
    else
    {
        {
            wchar_t * VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
            wmemset(VAR3, VAR4'', 100-1);
            VAR3[100-1] = VAR4'';
            
            VAR1 = VAR3;
        }
    }
    {
        wchar_t VAR5[100*2];
        wmemset(VAR5, VAR4'', 100*2-1); 
        VAR5[100*2-1] = VAR4''; 
        
        wcscpy(VAR5, VAR1);
        FUN3(VAR5);
        
    }
}