use std::io;

fn main() {
    loop {
        let numbers = input_number();
        let hs = numbers[0] as usize;
        let ws = numbers[1] as usize;
        if hs == 0 && ws == 0 { break }
        for h in 0..hs {
            for w in 0..ws {
                let c = if (h + w)%2 == 0 { "#" } else { "." };
                print!("{}", c);
            }
            println!("");
        }
        println!("");
    }
}

#[allow(dead_code)]
fn input_number() -> Vec<i64> {
    let mut input = String::new();

    io::stdin().read_line(&mut input)
        .expect("Failed to read line");

    let vec: Vec<i64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap_or(0))
        .collect();
    vec
}
