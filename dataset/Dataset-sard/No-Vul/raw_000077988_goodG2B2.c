static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    if(FUN2())
    {
        {
            wchar_t * VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
            wmemset(VAR2, VAR3'', 100-1);
            VAR2[100-1] = VAR3'';
            
            VAR1 = VAR2;
        }
    }
    {
        wchar_t VAR4[100*2];
        wmemset(VAR4, VAR3'', 100*2-1); 
        VAR4[100*2-1] = VAR3''; 
        
        wcscpy(VAR4, VAR1);
        FUN3(VAR4);
        
    }
}