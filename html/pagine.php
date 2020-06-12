<html>
    <head></head>

    <body>
        <?php
        $file = fopen("esempio.txt","r");
            if(!$file){
                echo("errore");
            }
            for ($i=0; $i < 4 ; $i++) { 

                $data = fread($file, 5);
                echo($data);
            
            }
          fclose($file);
        ?>
    </body>

</hmtl>